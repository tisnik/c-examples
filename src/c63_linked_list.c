/*
 * Example #63
 * Linked list.
 */
#include <stdio.h>
#include <stdlib.h>

/* User defined data type - structure */
typedef struct Node {
    int          value;
    struct Node *next;  /* pointer to the next node in a list */
} Node;

Node *list;

void printList(Node *list) {
    Node *node = list;
    while (node!=NULL) {
        printf("%d %p\n", node->value, node->next);
        node = node->next;
    }
}

int main(void) {
    Node *node1, *node2, *node3;

    node1 = (Node*)malloc(sizeof(Node));
    node1->value = 10;
    node1->next = NULL;

    node2 = (Node*)malloc(sizeof(Node));
    node2->value = 20;
    node2->next = NULL;

    node3 = (Node*)malloc(sizeof(Node));
    node3->value = 30;
    node3->next = NULL;

    list = node1;
    node1->next = node2;
    node2->next = node3;

    printList(list);
    return 0;
}

