/*
 * Example #64
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

/* insert node at the beggining of list! */
void insertNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = list;
    newNode->value = value;

    list = newNode; /* node is now the first item in the list */
}

void printList(Node *list) {
    Node *node = list;
    while (node!=NULL) {
        printf("%d %p\n", node->value, node->next);
        node = node->next;
    }
}

int main(void) {
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);

    printList(list);
    return 0;
}

