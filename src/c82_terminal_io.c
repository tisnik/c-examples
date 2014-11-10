/*
 * Example #82
 * Basic terminal I/O functions.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;

    printf("Do you want to format your disk [Y/N]? ");
    c = getchar();

    switch (c) {
        case 'y':
        case 'Y':
            printf("Formatting, please wait....\n");
            break;
        case 'n':
        case 'N':
            printf("Ok then....\n");
            break;
        default:
            printf("what?!\n");
            break;
    }

    return 0;
}

