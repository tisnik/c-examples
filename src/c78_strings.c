/*
 * Example #78
 * User-defined strcpy function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;

/* quite slow! */
void my_strcpy(char *dest, char *src)
{
    char *dest_char = dest;
    char *src_char  = src;

    while (*src_char) {
        *dest_char++ = *src_char++;
    }
}

int main(void) {
    str = (char *)malloc(100*sizeof(char));

    strcpy(str, "hello");
    printf("(%d) %s\n", strlen(str), str);

    strcpy(str, "");
    printf("(%d) %s\n", strlen(str), str);

    strcpy(str, "Hello world!");
    printf("(%d) %s\n", strlen(str), str);

    free(str);
    return 0;
}

