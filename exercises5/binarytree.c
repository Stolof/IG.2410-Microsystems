#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// a)
struct node{
  int key;
  //struct node *parentNode;
  struct node *leftNode;
  struct node *rightNode;
};
typedef struct node Node;

// b) return 1 if found value
int research(struct node *root, int value){
  struct node *current = root;
  while(current != NULL){
    if (current->key == value) return 1;
    else if ( current->key > value) current = current->leftNode;
    else current = current->rightNode;
  }
  return 0;
}

// c)
int plusGrand(struct node *root){
  while(root->rightNode != NULL) root = root->rightNode;
  return root->key;
}

int plusPetit(struct node *root){
  while(root->leftNode != NULL) root = root->leftNode;
  return root->key;
}

// d) WE CAN USE b) IN THIS ONE???
struct node *insert(struct node *root, int value){
  printf("Time to insert the a node: root value is %d  value is %d\n", root->key, value);
  struct node *current = root;
  struct node *newNode = malloc(sizeof(Node));
  newNode->key = value;
  newNode->leftNode = NULL;
  newNode->rightNode = NULL;
  if(current == NULL){
    return newNode;
  }
  else {
    while(current != NULL){
      if (current->key > newNode->key && current->leftNode == NULL){
        current->leftNode = newNode;
        break;
      }
      else if (current->key > newNode->key) current = current->leftNode;
      else if (current->key < newNode->key && current->rightNode == NULL){
        current->rightNode = newNode;
        break;
      }
      else if (current->key < newNode->key ) current = current->rightNode;
    }
  }
  return root;
}

// e) return sorted values.
int main(int argc, char const *argv[]){

    struct node *root = NULL;
    root = insert(root, 12);
    root = insert(root, 5);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 15);

    printf("The higest value is: %d\n", plusGrand(root));
    printf("The lowest value is: %d\n", plusPetit(root));
    printf("Is 10 available in the tree %d\n", research(root, 10));
    printf("Is 0 available in the tree  %d\n", research(root, 9));
    return 0;
}
