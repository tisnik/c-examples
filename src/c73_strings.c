/*
 * Example #73
 * Strings - sprintf function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;

int main(void) {
    str = (char*)malloc(100*sizeof(char));

    sprintf(str, "%d times %d is %d\n", 10, 20, 10*20);

    printf("string:     %s\n", str);
    printf("sizeof ptr: %d\n", sizeof(str));
    printf("string len: %d\n", strlen(str));

    free(str);
    return 0;
}

