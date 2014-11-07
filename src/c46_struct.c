/*
 * Example #46
 * Struct containing an array.
 */
#include <stdio.h>

#define SIZE 100

typedef struct {
    char data[SIZE];
} t_buffer;

int checksum1(char buffer[])
{
    int x = 0;
    int i;
    for (i=0; i<SIZE; i++) {
        x += buffer[i];
        buffer[i] = 0; /* clear item - but is it visible OUTSIDE this function? */
    }
    return x;
}

int checksum2(t_buffer buffer)
{
    int x = 0;
    int i;
    for (i=0; i<SIZE; i++) {
        x += buffer.data[i];
        buffer.data[i] = 0; /* clear item - but is it visible OUTSIDE this function? */
    }
    return x;
}

int main(int argc, char**argv)
{
    char direct_buffer[SIZE];
    t_buffer buffer_in_struct;
    int i;

    for (i=0; i<SIZE; i++) {
        direct_buffer[i] = i;
        buffer_in_struct.data[i] = i;
    }

    printf("checksum = %d\n", checksum1(direct_buffer));
    printf("checksum = %d\n", checksum1(direct_buffer));

    printf("checksum = %d\n", checksum2(buffer_in_struct));
    printf("checksum = %d\n", checksum2(buffer_in_struct));

    return 0;
}
