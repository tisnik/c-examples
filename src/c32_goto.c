/*
 * Example #32
 * goto statement - typical usage.
 */
#include <stdio.h>

int func1(void)
{
    return 1;
}

int func2(void)
{
    return 1;
}

int func3(void)
{
    return 1;
}

void cleanupFunc1(void)
{
    printf("Cleanup Func1\n");
}

void cleanupFunc2(void)
{
    printf("Cleanup Func2\n");
}

int main(void)
{
    if (!func1())
        goto EXIT;
    if (!func2())
        goto CLEANUP_FUNC_1;
    if (!func3())
        goto CLEANUP_FUNC_2_AND_1;

    printf("OK\n");
    return 0; /* everything is OK */

CLEANUP_FUNC_2_AND_1:
    cleanupFunc2();
CLEANUP_FUNC_1:
    cleanupFunc1();
EXIT:
    printf("Error\n");
    return 1;
}

