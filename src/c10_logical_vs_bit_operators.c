/*
 * Example #10
 * Bit operators versus logical operators.
 */
#include <stdio.h>

int main(void)
{
    printf("1 & 1 = %d\n", 1 & 1);
    printf("1 & 2 = %d\n", 1 & 2);
    printf("2 & 1 = %d\n", 2 & 1);
    printf("2 & 2 = %d\n", 2 & 2);
    printf("\n");
    printf("1 | 1 = %d\n", 1 | 1);
    printf("1 | 2 = %d\n", 1 | 2);
    printf("2 | 1 = %d\n", 2 | 1);
    printf("2 | 2 = %d\n", 2 | 2);
    printf("\n");
    printf("1 && 1 = %d\n", 1 && 1);
    printf("1 && 2 = %d\n", 1 && 2);
    printf("2 && 1 = %d\n", 2 && 1);
    printf("2 && 2 = %d\n", 2 && 2);
    printf("\n");
    printf("1 || 1 = %d\n", 1 || 1);
    printf("1 || 2 = %d\n", 1 || 2);
    printf("2 || 1 = %d\n", 2 || 1);
    printf("2 || 2 = %d\n", 2 || 2);
    printf("\n");
    return 0;
}

