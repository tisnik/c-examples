/*
 * Example #80
 * Array of dynamically allocated strings.
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

void free_array_items(char **array)
{
    char **item = array;
    while (*item)
    {
        printf("freeing memory block at address %p\n", *item);
        free(*item);
        item++;
    }
}

int main(void) {
    str_array = (char **)malloc(10*sizeof(char*));

    str_array[0] = (char *)malloc(strlen("Hello")*sizeof(char*));
    strcpy(str_array[0], "Hello");

    str_array[1] = (char *)malloc(strlen("world")*sizeof(char*));
    strcpy(str_array[1], "world");

    str_array[2] = (char *)malloc(strlen("!")*sizeof(char*));
    strcpy(str_array[2], "!");

    str_array[3] = NULL;

    print_str_array(str_array);
    putchar('\n');

    free_array_items(str_array);

    free(str_array);
    return 0;
}

