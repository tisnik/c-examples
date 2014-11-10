/*
 * Example #72
 * Strings - dynamic string allocation: calloc() and free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;

int main(void) {
    str = (char*)calloc(100, sizeof(char));

    strcpy(str, "Hello world!");

    printf("string:     %s\n", str);
    printf("sizeof ptr: %d\n", sizeof(str));
    printf("string len: %d\n", strlen(str));

    free(str);
    return 0;
}

