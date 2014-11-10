/*
 * Example #66
 * Linked list - updated example #64.
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

/* insert node at the beggining of list! */
void insertNode(Node **list, int value) {
    /* we need **list here because the pointer to the first node should change */
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = *list;
    newNode->value = value;

    *list = newNode; /* node is now the first item in the list */
}

void printList(Node *list) {
    Node *node = list;
    while (node!=NULL) {
        printf("%d %p\n", node->value, node->next);
        node = node->next;
    }
}

int main(void) {
    insertNode(&list1, 10);
    insertNode(&list1, 20);
    insertNode(&list1, 30);
    insertNode(&list1, 40);

    insertNode(&list2, 1);
    insertNode(&list2, 2);
    insertNode(&list2, 3);
    insertNode(&list2, 4);

    printList(list1);
    printList(list2);

    return 0;
}

