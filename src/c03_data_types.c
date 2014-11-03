/*
 * Example #3
 * Print the actual "width" of almost all basic data types.
 * The "width" is printed in bytes, ie. 2 means 16 bits etc.
 */
#include <stdio.h>

int main(void)
{
    printf("sizeof char      = %lu byte(s)\n", sizeof(char));
    printf("sizeof short     = %lu byte(s)\n", sizeof(short));
    printf("sizeof int       = %lu byte(s)\n", sizeof(int));
    printf("sizeof long      = %lu byte(s)\n", sizeof(long));
    printf("sizeof long long = %lu byte(s)\n", sizeof(long long));
    printf("sizeof float     = %lu byte(s)\n", sizeof(float));
    printf("sizeof double    = %lu byte(s)\n", sizeof(double));
    return 0;
}

