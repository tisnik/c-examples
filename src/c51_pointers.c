/*
 * Example #51
 * Pointers.
 */
#include <stdio.h>

int int_value = 42;
int *pointer_to_int;

int main(void) {
    /* get an address of int variable */
    pointer_to_int = &int_value;

    printf("address of int_value: %p\n", pointer_to_int);
    printf("value:                %i\n", int_value);
    printf("value via pointer:    %i\n", *pointer_to_int); /* the same output */

    return 0;
}

