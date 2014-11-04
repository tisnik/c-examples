/*
 * Example #18
 * Ternary operator.
 */
#include <stdio.h>

int main(void)
{
    int x = 0;

    printf("x is %s\n",  x == 0 ? "zero" : x > 0 ? "positive" : "negative");

    return 0;
}

