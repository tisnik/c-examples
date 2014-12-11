/*
 * Example #46
 * Struct containing an array.
 *
 * Copyright (c) 2014  Pavel Tisnovsky, Red Hat
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Red Hat nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Pavel Tisnovsky BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
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
