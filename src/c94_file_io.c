/*
 * Example #94
 * This program renders simple pattern and stores it in .pgm (raster) file.
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv)
{
    int i, j, k;
    FILE *fout = fopen("output.pgm", "wb");

    if (!fout) {
        perror("Cannot open output file");
    }

    fputs("P2\n",      fout);
    fputs("400 400\n", fout);
    fputs("255\n",     fout);

    for (i = 0; i < 400; i++)
    {
        for (j = 0; j < 400; j++)
        {
            k = i*i + j * j;
            k = k & 0xff;
            fprintf(fout, "%d ", k);
        }
        fputc('\n', fout);
    }

    fclose(fout);
    return 0;
}

