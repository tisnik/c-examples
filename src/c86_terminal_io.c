/*
 * Example #86
 * Basic terminal I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 0, y = 0;
    int converted;

    printf("Enter two integers: ");
    converted = scanf("%d %d", &x, &y);

    if (converted != 2) {
        printf("I said 'Enter two integers'...\n");
    }
    else {
        printf("Sum of %d and %d is %d\n", x, y, x+y);
    }

    return 0;
}

