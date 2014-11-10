/*
 * Example #77
 * User-defined strlen function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str = "Hello world!";

/* quite slow */
int my_strlen(char *str)
{
    int cnt = 0;
    char *ch = str;
    while (*ch++) {
        cnt++;
    }
    return cnt;
}

int main(void) {
    printf("%d\n", my_strlen(""));
    printf("%d\n", my_strlen("X"));
    printf("%d\n", my_strlen("Hello world!"));

    return 0;
}

