/*
 * Example #91
 * Write versus append file I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fout;
    int i;

    for (i=0; i<10; i++) {
        fout = fopen("test1.txt", "wt");
        fprintf(fout, "Hello world!");
        fclose(fout);

        fout = fopen("test2.txt", "at");
        fprintf(fout, "Hello world!");
        fclose(fout);
    }


    return 0;
}

