/*
 * Example #2
 * Print "Hello world!" to the standard output and then exit
 * with the exit value set to 42. This value is accessible
 * for the shell by using $?
 * echo $?
 */
#include <stdio.h>

int main(void)
{
    printf("Hello world!\n");
    return 42;
}

