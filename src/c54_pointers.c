/*
 * Example #54
 * Pointers.
 */
#include <stdio.h>

int int_value = 42;

/* declaration and inicialization */
int *pointer_to_int = &int_value;

int main(void) {
    printf("address of int_value: %p\n", pointer_to_int);
    printf("value:                %i\n", int_value);
    printf("value via pointer:    %i\n", *pointer_to_int); /* the same output */

    *pointer_to_int = 1000;

    printf("address of int_value: %p\n", pointer_to_int);  /* cannot change */
    printf("value:                %i\n", int_value);
    printf("value via pointer:    %i\n", *pointer_to_int); /* the same output */

    return 0;
}

