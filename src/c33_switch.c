/*
 * Example #33
 * simple switch statement.
 */
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("q to quit, h to help, any other char to continue\n");

    int input = getchar();

    switch (input) {
        case 'q':
            printf("quitting\n");
            break;
        case 'h':
            printf("this is help screen\n");
            break;
    }
    return 0;
}

