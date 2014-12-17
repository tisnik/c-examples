/*
 * Example #67
 * Linked list - updated example #65.
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

/* User defined data type - structure */
typedef struct Node {
    int          value;
    struct Node *next;  /* pointer to the next node in a list */
} Node;

Node *list1 = NULL;
Node *list2 = NULL;

/* append node at the end of list! */
void appendNode(Node **list, int value) {
    /* we need **list here because the pointer to the first node should change */
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;

    Node *lastNode = *list;

    if (lastNode == NULL) {
        *list = newNode;
        return;
    }

    /* find last node in a list to append new item to it */
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    /* append new node */
    lastNode->next = newNode;
}

void printList(Node *list) {
    Node *node = list;
    while (node!=NULL) {
        printf("%d %p\n", node->value, node->next);
        node = node->next;
    }
}

int main(void) {
    appendNode(&list1, 10);
    appendNode(&list1, 20);
    appendNode(&list1, 30);
    appendNode(&list1, 40);

    appendNode(&list2, 1);
    appendNode(&list2, 2);
    appendNode(&list2, 3);
    appendNode(&list2, 4);

    printList(list1);
    printList(list2);

    return 0;
}

