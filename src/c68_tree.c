/*
 * Example #68
 * Binary tree.
 */
#include <stdio.h>
#include <stdlib.h>

/* User defined data type - structure */
typedef struct Node {
    int          value;
    struct Node *left;
    struct Node *right;
} Node;

/* Root node of the tree */
Node *tree = NULL;

/* Insert new value into a tree or into a subtree */
void insert(Node **root, int value) {
    /* does root node exist? */
    if (*root == NULL)
    {
        *root = (Node *)malloc(sizeof(Node));
        (*root)->value = value;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    int cmp = value - (*root)->value;
    /* insert node *somewhere* into the left subtree */
    if (cmp < 0)
    {
        insert(&(*root)->left, value);
    }
    /* insert new node *somewhere* into the right subtree */
    else if (cmp > 0)
    {
        insert(&(*root)->right, value);
    }
}

/* Traverse tree using inorder algorithm and prints item values into given file */
void traverseTree(Node *root) {
    if (root == NULL) return;
    traverseTree(root->left);
    printf("%d\n", root->value);
    traverseTree(root->right);
}

int main(void) {
    insert(&tree, 10);
    insert(&tree, 20);
    insert(&tree, 30);
    insert(&tree, 99);
    insert(&tree,  0);
    insert(&tree, 25);
    insert(&tree, 35);
    insert(&tree, 45);

    traverseTree(tree);

    return 0;
}

