/*
 * Example #76
 * String as a character array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str = "Hello world!";

int main(void) {
    int i;
    char *ch;

    /* not an idiomatic approach */
    for (i=0; i<strlen(str); i++) {
        putchar(str[i]);
    }
    putchar('\n');

    /* better */
    for (ch=str; *ch != '\0'; ch++) {
        putchar(*ch);
    }
    putchar('\n');

    /* even better */
    for (ch=str; *ch; ch++) {
        putchar(*ch);
    }
    putchar('\n');

    /* or ... */
    ch=str;
    while (*ch) {
        putchar(*ch++);
    }
    putchar('\n');

    return 0;
}

