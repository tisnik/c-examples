/*
 * Example #13
 * Arithmetic left shift.
 */
#include <stdio.h>

int main(void)
{
    int i = -1;

    printf("-1 << 0 = %d\n",  i << 0);
    printf("-1 << 1 = %d\n",  i << 1);
    printf("-1 << 2 = %d\n",  i << 2);
    printf("-1 << 3 = %d\n",  i << 3);
    printf("-1 << 4 = %d\n",  i << 4);
    printf("-1 << 10 = %d\n", i << 10);
    printf("-1 << 20 = %d\n", i << 20);
    printf("\n");

    i = -3;

    printf("-3 << 0 = %d\n",  i << 0);
    printf("-3 << 1 = %d\n",  i << 1);
    printf("-3 << 2 = %d\n",  i << 2);
    printf("-3 << 3 = %d\n",  i << 3);
    printf("-3 << 4 = %d\n",  i << 4);
    printf("-3 << 10 = %d\n", i << 10);
    printf("-3 << 20 = %d\n", i << 20);
    printf("\n");

    return 0;
}

