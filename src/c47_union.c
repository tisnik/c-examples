/*
 * Example #47
 * Union.
 */
#include <stdio.h>

typedef union {
    int   int_value;
    float float_value;
} my_union;

int main(int argc, char**argv)
{
    my_union x;

    printf("sizeof my_union is %d bytes\n", sizeof(my_union));

    x.float_value = 0.0;
    printf("%x\n", x.int_value);

    x.float_value = 1.0;
    printf("%x\n", x.int_value);

    x.float_value = 2.0;
    printf("%x\n", x.int_value);

    x.float_value = -10.0;
    printf("%x\n", x.int_value);

    return 0;
}
