/*
 * Example #55
 * Pointers.
 */
#include <stdio.h>

/* function that returns two values via references to two variables */
void return_two_values(int *x, int *y) {
    *x = 100;
    *y = 200;
}

int main(void) {
    int a = 0, b = 0;

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    /* you can't use constants here! */
    return_two_values(&a, &b);

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}

