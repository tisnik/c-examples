/*
 * Example #80
 * Array of dynamically allocated strings.
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
#include <stdlib.h>
#include <string.h>

char **str_array;

void print_str_array(char **array)
{
    char **item = array;
    while (*item)
    {
        printf("%s ", (*item++));
    }
}

void free_array_items(char **array)
{
    char **item = array;
    while (*item)
    {
        printf("freeing memory block at address %p\n", *item);
        free(*item);
        item++;
    }
}

int main(void) {
    str_array = (char **)malloc(10*sizeof(char*));

    str_array[0] = (char *)malloc(strlen("Hello")*sizeof(char*));
    strcpy(str_array[0], "Hello");

    str_array[1] = (char *)malloc(strlen("world")*sizeof(char*));
    strcpy(str_array[1], "world");

    str_array[2] = (char *)malloc(strlen("!")*sizeof(char*));
    strcpy(str_array[2], "!");

    str_array[3] = NULL;

    print_str_array(str_array);
    putchar('\n');

    free_array_items(str_array);

    free(str_array);
    return 0;
}

