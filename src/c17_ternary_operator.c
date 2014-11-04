/*
 * Example #17
 * Ternary operator.
 */
#include <stdio.h>

int main(void)
{
    int x = 1;

    printf("x is %s\n",  x >= 0 ? "positive" : "negative");

    printf("x has value %s\n",  x == 0 ? "equal to zero" : "different from zero");

    printf("1/x = %f\n", x != 0 ? 1.0/x : 0.0);

    return 0;
}

