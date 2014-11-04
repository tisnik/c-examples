/*
 * Example #15
 * Relational operators.
 */
#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x == y = %d\n",  x == y);
    printf("x != y = %d\n",  x != y);
    printf("x >  y = %d\n",  x >  y);
    printf("x >= y = %d\n",  x >= y);
    printf("x <= y = %d\n",  x <= y);
    printf("x <  y = %d\n",  x <  y);
    printf("\n");

    float xf = 1/2.;
    float yf = 2/5.;
    printf("xf == yf = %d\n",  xf == yf);
    printf("xf != yf = %d\n",  xf != yf);
    printf("xf >  yf = %d\n",  xf >  yf);
    printf("xf >= yf = %d\n",  xf >= yf);
    printf("xf <= yf = %d\n",  xf <= yf);
    printf("xf <  yf = %d\n",  xf <  yf);
    printf("\n");

    return 0;
}

