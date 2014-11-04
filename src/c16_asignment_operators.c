/*
 * Example #16
 * Asignment operators.
 */
#include <stdio.h>

int main(void)
{
    int x = 1;

    printf("x = %d\n",  x);

    x += 10;
    printf("x = %d\n",  x);

    x -= 10;
    printf("x = %d\n",  x);

    x *= 42;
    printf("x = %d\n",  x);

    x >>= 1;
    printf("x = %d\n",  x);

    x &= 0x0f;
    printf("x = %d\n",  x);

    return 0;
}

