/*
 * Example #13
 * Arithmetic left shift.
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

int main(void)
{
    int i = -1;

    printf("-1 << 0 = %d\n",  i << 0);
    printf("-1 << 1 = %d\n",  i << 1);
    printf("-1 << 2 = %d\n",  i << 2);
    printf("-1 << 3 = %d\n",  i << 3);
    printf("-1 << 4 = %d\n",  i << 4);
    printf("-1 << 10 = %d\n", i << 10);
    printf("-1 << 20 = %d\n", i << 20);
    printf("\n");

    i = -3;

    printf("-3 << 0 = %d\n",  i << 0);
    printf("-3 << 1 = %d\n",  i << 1);
    printf("-3 << 2 = %d\n",  i << 2);
    printf("-3 << 3 = %d\n",  i << 3);
    printf("-3 << 4 = %d\n",  i << 4);
    printf("-3 << 10 = %d\n", i << 10);
    printf("-3 << 20 = %d\n", i << 20);
    printf("\n");

    return 0;
}

