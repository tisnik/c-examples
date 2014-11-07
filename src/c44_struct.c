/*
 * Example #44
 * Data padding (and alignment).
 */
#include <stdio.h>

int main(int argc, char**argv)
{
    typedef struct {
        int x;
        int y;
    } t_point;
    typedef struct {
        int x;
        char c; // padding 3 bytes (on my arch!)
    } t_point2;
    typedef struct {
        int x;
        char c; // padding 3 bytes (on my arch!)
        int y;
    } t_point3;

    printf("sizeof int is  %d\n", (int)sizeof(int));
    printf("sizeof char is %d\n", (int)sizeof(char));
    printf("sizeof struct{int, int}  is %d\n", (int)sizeof(t_point));
    printf("sizeof struct{int, char} is %d\n", (int)sizeof(t_point2));
    printf("sizeof struct{int, char, int} is %d\n", (int)sizeof(t_point3));
    return 0;
}
