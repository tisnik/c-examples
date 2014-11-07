/*
 * Example #41
 * multidimensional arrays.
 */
#include <stdio.h>

int main(int argc, char **argv)
{
    int array[5][5];

    int i,j;

    for (j=0; j<5; j++)
        for (i=0; i<5; i++)
            array[j][i] = i*j;

    for (j=0; j<5*5; j++)
        printf("%d ", array[0][j]);

    return 0;
}


