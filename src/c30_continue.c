/*
 * Example #30
 * continue statement.
 */
#include <stdio.h>

int main(void)
{
    int x = 0;

    while (x++ <= 20) {
        x++;
        if (x % 2) continue;
        printf("%d\n", x);
    }

    return 0;
}

