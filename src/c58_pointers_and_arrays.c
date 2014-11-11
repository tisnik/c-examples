/*
 * Example #58
 * Pointers and arrays.
 */
#include <stdio.h>

#define ARRAY_SIZE 10
int array[ARRAY_SIZE];

int main(void) {
    int i;
    int *pointer = array;

    for (i=0; i<ARRAY_SIZE; i++) {
        *pointer++ = i*2;      /* common idiom */
    }

    printf("Reading items using index operator:\n");
    for (i=0; i<ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }

    printf("\nReading items using pointer:\n");
    pointer = array;           /* there's no * before the pointer identifier */
    for (i=0; i<ARRAY_SIZE; i++) {
        printf("%d ", *pointer);
        pointer++;             /* this means: address=address+sizeof(int)!!! */
    }

    return 0;
}

