/*
 * Example #8
 * Logical operators basic usage.
 */
#include <stdio.h>

int main(void)
{
    printf("!0     = %d\n", !0);
    printf("!1     = %d\n", !1);
    printf("!1000  = %d\n", !1000);
    printf("!!1000 = %d\n", !!1000);
    printf("\n");
    printf("0 && 0 = %d\n", 0 && 0);
    printf("0 && 1 = %d\n", 0 && 1);
    printf("1 && 0 = %d\n", 1 && 0);
    printf("1 && 1 = %d\n", 1 && 1);
    printf("\n");
    printf("0 || 0 = %d\n", 0 || 0);
    printf("0 || 1 = %d\n", 0 || 1);
    printf("1 || 0 = %d\n", 1 || 0);
    printf("1 || 1 = %d\n", 1 || 1);
    printf("\n");
    return 0;
}

