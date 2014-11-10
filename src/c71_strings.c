/*
 * Example #71
 * Strings - dynamic string allocation: malloc() and free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;

int main(void) {
    str = (char*)malloc(100*sizeof(char));

    strcpy(str, "Hello world!");

    printf("string:     %s\n", str);
    printf("sizeof ptr: %d\n", sizeof(str));
    printf("string len: %d\n", strlen(str));

    free(str);
    return 0;
}

