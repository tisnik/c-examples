/*
 * Example #65
 * Linked list.
 */
#include <stdio.h>
#include <stdlib.h>

/* User defined data type - structure */
typedef struct Node {
    int          value;
    struct Node *next;  /* pointer to the next node in a list */
} Node;

Node *list = NULL;

/* append node at the end of list! */
void appendNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;

    Node *lastNode = list;

    if (lastNode == NULL) {
        list = newNode;
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
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);

    printList(list);
    return 0;
}

