/*
 * Example #45
 * Array of struct.
 */
#include <stdio.h>

typedef struct {
    int x;
    int y;
} t_point;

#define SIZE 100

int main(int argc, char**argv)
{
    t_point points[SIZE];

    int i;

    for (i=0; i<SIZE; i++) {
        points[i].x = i*2;
        points[i].y = 10000 / (i+1);
    }

    for (i=0; i<SIZE; i++) {
        t_point point = points[i];
        printf("%#d = [%d,%d]\n", i, point.x, point.y);
    }

    return 0;
}
