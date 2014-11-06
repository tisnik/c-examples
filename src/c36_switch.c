/*
 * Example #36
 * problem with missing "break" statement.
 */
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("q to quit, h to help, any other char to continue\n");

    int input = getchar();

    switch (input) {
        case 'Q':
        case 'q':
            printf("quitting\n");
            /*break; !!!!!!!!!!!! */
        case 'H':
        case 'h':
            printf("this is help screen\n");
            break;
        default:
            printf("unknown command\n");
            break;
    }
    return 0;
}

