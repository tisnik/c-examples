/*
 * Example #59
 * Pointers and arrays.
 */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(void) {
    int *array = (int *)malloc(ARRAY_SIZE*sizeof(int));

    int i;

    for (i=0; i<ARRAY_SIZE; i++) {
        array[i] = i*2;          /* yes, it's _almost_ the same as static array */
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }

    free(array);   /* deallocation */
    return 0;
}

