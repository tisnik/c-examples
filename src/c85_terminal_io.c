/*
 * Example #85
 * Basic terminal I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 0, y = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Sum of %d and %d is %d\n", x, y, x+y);

    return 0;
}

