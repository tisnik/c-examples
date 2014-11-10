/*
 * Example #83
 * Basic terminal I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;

    while ((c=getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}

