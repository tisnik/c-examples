/*
 * Example #50
 * Signed and unsigned values in bitfields.
 */
#include <stdio.h>

struct {
    unsigned int firstItem  : 1;
    unsigned int secondItem : 2;
    unsigned int thirdItem  : 3;
    signed int   fourthItem : 1;
    signed int   fifthItem  : 2;
    signed int   sixthItem  : 3;
} bitfields;
 
int main(void) {
    int i;

    for (i=0; i<8; i++) {
        bitfields.firstItem  = i;
        bitfields.secondItem = i;
        bitfields.thirdItem  = i;
        bitfields.fourthItem = i;
        bitfields.fifthItem  = i;
        bitfields.sixthItem  = i;

        printf("%d unsigned: %2d %2d %2d    signed: %2d %2d %2d\n", i,
            bitfields.firstItem,
            bitfields.secondItem,
            bitfields.thirdItem,
            bitfields.fourthItem,
            bitfields.fifthItem,
            bitfields.sixthItem);
    }

    return 0;
}

