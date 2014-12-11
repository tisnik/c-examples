/*
 * Example #50
 * Signed and unsigned values in bitfields.
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

