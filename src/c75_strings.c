/*
 * Example #75
 * Strings - string comparison.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str1 = "first";
char *str2 = "second";
char *str3 = "second";

int main(void) {

    printf("str1 vs str2: %d\n", strcmp(str1, str2));
    printf("str2 vs str1: %d\n", strcmp(str2, str1));
    printf("str1 vs str3: %d\n", strcmp(str1, str3));
    printf("str2 vs str3: %d\n", strcmp(str2, str3));
    printf("str3 vs str2: %d\n", strcmp(str3, str2));

    return 0;
}

