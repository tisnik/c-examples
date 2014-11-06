/*
 * Example #40
 * multidimensional arrays.
 */
#include <stdio.h>

int main(int argc, char **argv)
{
    int array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int i,j;

    for (j=0; j<3; j++) {
        for (i=0; i<3; i++) {
            printf("%d ", array[j][i]);
        }
        putchar('\n');
    }

    return 0;
}


