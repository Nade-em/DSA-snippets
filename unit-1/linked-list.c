#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
};
  //declares a pointer to a struct Node
struct Node* head;
  struct Node* one;
  struct Node* two;
  struct Node* three;

void print(){
struct Node *temp = head;
  while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main(){


  // allocate memory for nodes in the linked list in heap
  one = (struct Node*)malloc(sizeof(struct Node));
  two = (struct Node*)malloc(sizeof(struct Node));
  three = (struct Node*)malloc(sizeof(struct Node));

  //assign data values
  one->data = 5;
  two->data = 10;
  three->data = 15;

  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;

  // linked list function calls
  print();
  return 0;
}