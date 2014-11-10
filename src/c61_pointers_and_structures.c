/*
 * Example #61
 * Pointers and stuctures.
 */
#include <stdio.h>
#include <stdlib.h>

/* User defined data type - structure */
typedef struct {
    int x;
    int y;
} vector;

int main(void) {
    /* structure inicialization */
    vector v1 = {1,2};

    /* get a pointer to our structure */
    vector *pv1 = &v1;

    /* update items by using pointer */
    pv1->x = 20;
    pv1->y = 30;

    printf("%d %d\n", v1.x, v1.y);
    printf("%d %d\n", pv1->x, pv1->y);
    printf("%d %d\n", (*pv1).x, (*pv1).y);
    return 0;
}

