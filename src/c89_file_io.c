/*
 * Example #89
 * Basic file I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(void) {
    FILE *fout;
    float array[ARRAY_SIZE];
    int i;

    for (i=0; i<ARRAY_SIZE; i++) {
        array[i] = 1.0/(i+1);
    }

    fout = fopen("test.bin", "wb");
    fwrite(array, sizeof(float), ARRAY_SIZE, fout);
    fclose(fout);

    return 0;
}

