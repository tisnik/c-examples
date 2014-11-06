/*
 * Example #38
 * good luck with segfault! :-)
 */
#include <stdio.h>

#define SIZE 10
int array[SIZE];

int main(int argc, char **argv)
{
    printf("Array size in memory is %d bytes\n", (int)sizeof(array));

    array[-1000] = 0;
    array[1000] = 0;

    return 0;
}

