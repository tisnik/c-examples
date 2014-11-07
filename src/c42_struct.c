/*
 * Example #42
 * Structure declaration.
 */
#include <stdio.h>

struct my_struct {
    int x;
    int y;
    char c;
    float f;
};

void print_t_s(struct my_struct structure) {
    printf("structure.x = %d\n", structure.x);
    printf("structure.y = %d\n", structure.y);
    printf("structure.c = %c\n", structure.c);
    printf("structure.f = %f\n", structure.f);
}

int main(int argc, char **argv) {
    struct my_struct var1 = {1, 2,'a', 3.14};
    struct my_struct var2;

    var2.x = 10;
    var2.y = 20;
    var2.c = 'x';
    var2.f = 1/100.0;

    print_t_s(var1); print_t_s(var2);
    return 0;
}

