/*
 * Example #87
 * Basic file I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fout;

    fout = fopen("test.txt", "wt");
    fprintf(fout, "Hello world!");
    fclose(fout);

    return 0;
}

