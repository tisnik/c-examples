/*
 * Example #60
 * Pointers and arrays.
 */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

int main(void) {
    int array1[ARRAY_SIZE];
    int *array2 = (int *)malloc(ARRAY_SIZE*sizeof(int));

    printf("%d\n", sizeof(array1));  /* returns size of the memory area allocated for an array */
    printf("%d\n", sizeof(array2));  /* returns just a size of pointer, ie. how wide is address on given architecture */

    free(array2);                    /* deallocation */
    return 0;
}

