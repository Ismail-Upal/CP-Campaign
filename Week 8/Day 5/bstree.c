#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertLeft(struct Node* root, int val) {
    root->left = createNode(val);
    return root->left;
}

struct Node* insertRight(struct Node* root, int val) {
    root->right = createNode(val);
    return root->right;
}

int countNodes(struct Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inOrder(struct Node* root, int* n) {
    if (root == NULL) return;
    inOrder(root->left, n);
    printf("%d", root->data);
    (*n)--;
    if (*n > 0) printf(" -> ");
    inOrder(root->right, n);
}

void preOrder(struct Node* root, int* n) {
    if (root == NULL) return;
    printf("%d", root->data);
    (*n)--;
    if (*n > 0) printf(" -> ");
    preOrder(root->left, n);
    preOrder(root->right, n);
}

void postOrder(struct Node* root, int* n) {
    if (root == NULL) return;
    postOrder(root->left, n);
    postOrder(root->right, n);
    printf("%d", root->data);
    (*n)--;
    if (*n > 0) printf(" -> ");
}

int main() {
    struct Node* root = createNode(8);

    insertLeft(root, 2);
    insertLeft(root->left, 7);
    insertRight(root->left, 16);
    insertLeft(root->left->right, 4);
    insertRight(root->left->right->left, 9);

    insertRight(root, 9);
    insertLeft(root->right, 2);

    int n = countNodes(root);
    printf("InOrder Traverse: \n");
    inOrder(root, &n); 
    printf("\n\n");

    n = countNodes(root);
    printf("PreOrder Traverse: \n");
    preOrder(root, &n); 
    printf("\n\n");

    n = countNodes(root);
    printf("PostOrder Traverse: \n");
    postOrder(root, &n); 
    printf("\n");

    return 0;
}
