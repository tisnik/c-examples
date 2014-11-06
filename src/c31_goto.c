/*
 * Example #31
 * goto statement.
 */
#include <stdio.h>

int main(void)
{
REPEAT:
    printf("Endless loop!\n");
    goto REPEAT;
    return 0;
}

