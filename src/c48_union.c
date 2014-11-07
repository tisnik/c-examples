/*
 * Example #48
 * Union and struct (and bit field).
 */
#include <stdio.h>

int main(int argc, char**argv)
{
    union {
        struct {
            unsigned char byte1:8;
            unsigned char byte2:8;
            unsigned char byte3:8;
            unsigned char byte4:8;
        } four_bytes;
        int int_value;
    } u;

    u.int_value = 0x12345678;

    printf("%x\n", u.four_bytes.byte1);
    printf("%x\n", u.four_bytes.byte2);
    printf("%x\n", u.four_bytes.byte3);
    printf("%x\n", u.four_bytes.byte4);

    u.four_bytes.byte2 = 0;

    printf("%x\n", u.int_value);
    return 0;
}
