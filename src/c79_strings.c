/*
 * Example #79
 * Array of strings.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **str_array;

void print_str_array(char **array)
{
    char **item = array;
    while (*item)
    {
        printf("%s ", (*item++));
    }
}

int main(void) {
    str_array = (char **)malloc(10*sizeof(char*));
    str_array[0] = "Hello";
    str_array[1] = "world";
    str_array[2] = "!";
    str_array[3] = NULL;

    print_str_array(str_array);
    free(str_array);
    return 0;
}

