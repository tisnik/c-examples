/*
 * Example #68
 * Binary tree.
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

