#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int data;
  struct TreeNode * left;
  struct TreeNode * right;
};
struct TreeNode * createNode(int value) {
  struct TreeNode * newNode = (struct TreeNode * ) malloc(sizeof(struct TreeNode));
  newNode -> data = value;
  newNode -> left = NULL;
  newNode -> right = NULL;
  return newNode;
}
struct TreeNode * insert(struct TreeNode * root, int value) {
  if (root == NULL) {
    return createNode(value);
  }
  if (value < root -> data) {
    root -> left = insert(root -> left, value);
  } else if (value > root -> data) {
    root -> right = insert(root -> right, value);
  }
  return root;
}
void inorder(struct TreeNode * root) {
  if (root == NULL) {
    return;
  }
  inorder(root -> left);
  printf("%d", root -> data);
  inorder(root -> right);
}
int main() {
  struct TreeNode * root = NULL;
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 50);
  root = insert(root, 40);
  printf("inorder traversal: ");
  inorder(root);
  printf("\n");
  return 0;
}
