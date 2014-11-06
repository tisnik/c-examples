/*
 * Example #39
 * how to pass arrays to functions.
 */
#include <stdio.h>

#define SIZE 10
int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};

int sum(int array[], int n)
{
    int sum = 0;
    int i;
    for (i=0; i<n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main(int argc, char **argv)
{
    printf("%d\n", sum(array, SIZE));
    return 0;
}

