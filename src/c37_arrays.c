/*
 * Example #37
 * basic array operations.
 */
#include <stdio.h>

#define SIZE 10
int array[SIZE];

int main(int argc, char **argv)
{
    printf("Array size in memory is %d bytes\n", (int)sizeof(array));

    int i;
    for (i = 0; i < SIZE; i++) {
        array[i] = 10 * i;
    }

    for (i = 0; i < SIZE; i++) {
        printf("array[%d] == %d\n", i, array[i]);
    }

    return 0;
}

