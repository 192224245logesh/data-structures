#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); 
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void freeTree(struct Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

void inOrderTraversal(struct Node* root) {
    if (root == NULL) return;
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

void preOrderTraversal(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(struct Node* root) {
    if (root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ", root->data);
}

int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrderTraversal(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrderTraversal(root);
    printf("\n");

 
    freeTree(root);

    return 0;
}