/*
 * Example #49
 * Structures versus bit fields.
 */
#include <stdio.h>

struct {
    unsigned int firstItem;
    unsigned int secondItem;
    unsigned int thirdItem;
    unsigned int fourthtem;
} status1;

struct {
    unsigned int firstItem  : 1;
    unsigned int secondItem : 1;
    unsigned int thirdItem  : 1;
    unsigned int fourthtem  : 1;
} status2;
 
int main( ) {
    printf( "status1 size: %d\n", sizeof(status1));
    printf( "status2 size: %d\n", sizeof(status2));

    return 0;
}

