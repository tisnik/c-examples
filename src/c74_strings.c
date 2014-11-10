/*
 * Example #74
 * Strings - strcat, strcpy and strlen functions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;

int main(void) {
    str = (char*)malloc(100*sizeof(char));

    strcpy(str, "first");
    strcat(str, " ");
    strcat(str, "second");

    printf("string:     %s\n", str);
    printf("sizeof ptr: %d\n", sizeof(str));
    printf("string len: %d\n", strlen(str));

    free(str);
    return 0;
}

