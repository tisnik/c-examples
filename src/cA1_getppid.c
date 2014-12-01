/*
 * Example #101
 * getppid().
 */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("This is process with PID %d\n", getpid());
    printf("The parent process has PID %d\n", getppid());

    return 0;
}

