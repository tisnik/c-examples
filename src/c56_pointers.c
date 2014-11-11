/*
 * Example #56
 * Pointers.
 */
#include <stdio.h>

/* swap two values */
void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void) {
    int a = 0, b = 1;

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    /* swap two values */
    swap(&a, &b);

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}

