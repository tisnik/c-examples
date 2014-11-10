/*
 * Example #84
 * Basic terminal I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;

    for (i=1; i<=10; i++) {
        float x = 1.0/i;
        printf("%02d  %6.4f\n", i, x);
    }

    return 0;
}

