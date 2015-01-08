/*
 * Example #95
 * IFS renderer.
 *
 * Copyright (c) 2014  Pavel Tisnovsky, Red Hat
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Red Hat nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Pavel Tisnovsky BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PIXMAP_WIDTH    512
#define PIXMAP_HEIGHT   512

typedef struct {
    unsigned int width;
    unsigned int height;
    unsigned char *pixels;
} pixmap;

pixmap *pix;

float fmap[PIXMAP_HEIGHT][PIXMAP_WIDTH];

/* IFS system parameters */
static double data[][7]={
    { 0.850000, 0.040000,-0.040000, 0.850000, 0.000000, 1.600000, 0.850000},
    { 0.200000,-0.260000, 0.230000, 0.220000, 0.000000, 1.600000, 0.070000},
    {-0.150000, 0.280000, 0.260000, 0.240000, 0.000000, 0.440000, 0.070000},
    { 0.000000, 0.000000, 0.000000, 0.160000, 0.000000, 0.000000, 0.010000},
    { 1.000000, 0.000000, 0.000000, 1.000000, 0.000000, 0.000000, 1.000000},
};

/* BMP header */
unsigned char bmp_header[] =
{
    0x42, 0x4d,             /* magic number */
    0x46, 0x00, 0x00, 0x00, /* size of header=70 bytes */
    0x00, 0x00,             /* unused */
    0x00, 0x00,             /* unused */
    0x36, 0x00, 0x00, 0x00, /* 54 bytes - offset to data */
    0x28, 0x00, 0x00, 0x00, /* 40 bytes - bytes in DIB header */
    0x00, 0x00, 0x00, 0x00, /* width of bitmap */
    0x00, 0x00, 0x00, 0x00, /* height of bitmap */
    0x01, 0x0,              /* 1 pixel plane */
    0x18, 0x00,             /* 24 bpp */
    0x00, 0x00, 0x00, 0x00, /* no compression */
    0x00, 0x00, 0x00, 0x00, /* size of pixel array */
    0x13, 0x0b, 0x00, 0x00, /* 2835 pixels/meter - proste magie od Micro$softu */
    0x13, 0x0b, 0x00, 0x00, /* 2835 pixels/meter */
    0x00, 0x00, 0x00, 0x00, /* color palette */
    0x00, 0x00, 0x00, 0x00, /* important colors */
};



/* create pixmap with the given resolution */
pixmap * createPixmap(const unsigned int width, const unsigned int height)
{
    pixmap *p=(pixmap *)malloc(sizeof(pixmap));
    if (!p) return NULL;
    p->width=width;
    p->height=height;
    p->pixels=(unsigned char *)malloc(3*width*height);
    if (!p->pixels) {
        free(p);
        return NULL;
    }
    else {
        memset(p->pixels, 0, 3*width*height);
    }
    return p;
}



/* clear whole pixmap */
void clearPixmap(const pixmap *p)
{
    if (!p) return;
    if (!p->pixels) return;
    memset(p->pixels, 0, 3*p->width*p->height);
    memset(fmap, 0, PIXMAP_WIDTH*PIXMAP_HEIGHT*sizeof(float));
}



/* save bitmap into BMP file */
void savePixmap(const pixmap *p, const char *fileName)
{
    FILE *fout;
    int width, height, size;

    width = p->width;
    height = p->height;
    size = width*height*3;

    bmp_header[18] =  width & 0xff;
    bmp_header[19] = (width >> 8) & 0xff;
    bmp_header[20] = (width >> 16) & 0xff;
    bmp_header[21] = (width >> 24) & 0xff;
    bmp_header[22] =  height & 0xff;
    bmp_header[23] = (height >> 8) & 0xff;
    bmp_header[24] = (height >> 16) & 0xff;
    bmp_header[25] = (height >> 24) & 0xff;

    fout=fopen(fileName, "wb");
    if (fout) {
        /* write header */
        fwrite(bmp_header, sizeof(bmp_header), 1, fout);
        /* write data/pixels */
        fwrite(p->pixels, width*height*3, 1, fout);
        fclose(fout);
    }
}



/* put pixel into the bitmap */
void putpixel(pixmap *p,
              const unsigned int x,
              const unsigned int y,
              const unsigned char r,
              const unsigned char g,
              const unsigned char b)
{
    int pos;
    if (!p || !p->pixels || x>=p->width || y>=p->height) return;
    pos=3*(x+y*p->width);
    p->pixels[pos++]=r;
    p->pixels[pos++]=g;
    p->pixels[pos]=b;
}



/* add one to the actual value of the given pixel */
void addfloat(const unsigned int x, const unsigned int y)
{
    if (x>=PIXMAP_WIDTH || y>=PIXMAP_HEIGHT) return;
    fmap[y][x]++;
}



/* render whole IFS system into the pixmap */
void renderIFS(pixmap *pix)
{
    int i, j;
    float maxp=0;

    for (j=0; j<PIXMAP_HEIGHT; j++) {
        for (i=0; i<PIXMAP_WIDTH; i++) {
            if (maxp<fmap[j][i]) maxp=fmap[j][i];
        }
    }

    printf("maxp=%f\n", maxp);

    for (j=0; j<PIXMAP_HEIGHT; j++) {
        for (i=0; i<PIXMAP_WIDTH; i++) {
            float pixel=log(fmap[j][i])/log(maxp)*255.0;
            putpixel(pix, i, j, (int)pixel, (int)pixel, (int)pixel);
        }
    }
}



/* recalculate the IFS system */
void recalcIFS(pixmap *pix, int maxIter, int startIter)
{
    double x1=0, y1=0, x2=0, y2=0;
    double xmin=1e10, xmax=-1e10;
    double ymin=1e10, ymax=-1e10;
    int    x, y, k;
    double pp, sum;
    double divider=12.0;
    int i;

    xmin=-5.0; xmax=10.0; ymin=-1.0; ymax=00.0;

    for (i=0; i<maxIter; i++) {
        pp=((float)rand())/RAND_MAX;
        sum=0;

        /* find the right transformation */
        for (k=0; sum<=pp; k++)
            sum+=data[k][6];
        k--;

        /* apply the transformation */
        x2=x1*data[k][0] + y1*data[k][1] + data[k][4];
        y2=x1*data[k][2] + y1*data[k][3] + data[k][5];
        x1=x2; y1=y2;

        /* we are over the limit */
        if (i>startIter) {
            x2=(x1-xmin)*(double)(pix->width)/divider;
            y2=(y1-ymin)*(double)(pix->height)/divider;
            x=(int)x2; y=(int)y2;
            addfloat(x, y);
        }
    }
    renderIFS(pix);
}



/* create IFS system and store it as a BMP file */
void createIFS()
{
    const int maxiter=100000;
    const int startiter=100;

    pix=createPixmap(PIXMAP_WIDTH, PIXMAP_HEIGHT);
    clearPixmap(pix);
    recalcIFS(pix, maxiter, startiter);
    savePixmap(pix, "output.bmp");
}



/* entry point to the application */
int main(int argc, char **argv)
{
    puts("processing:");
    createIFS();
    puts("done!");

    return 0;
}

