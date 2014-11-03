/*
 * Example #7
 * Arithmetic operators basic usage.
 */
#include <stdio.h>

int main(void)
{
    float x = 10.0;
    float y = 10.0;
    printf("-- operator:\n");
    printf("original x value = %f\n", x);
    printf("original y value = %f\n", y);
    printf("x--              = %f\n", x--);
    printf("--y              = %f\n", --y);
    printf("new x value      = %f\n", x);
    printf("new y value      = %f\n", y);
    return 0;
}

