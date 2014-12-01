/*
 * Example #100
 * getpid().
 */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("This is process with PID %d\n", getpid());

    return 0;
}

