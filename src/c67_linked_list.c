/*
 * Example #67
 * Linked list - updated example #65.
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

