/*
 * Example #88
 * Basic file I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fin;
    char str[100];

    fin = fopen("test.txt", "rt");
    fgets(str, 100, fin);
    puts(str);
    fclose(fin);

    return 0;
}

