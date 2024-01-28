#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
int isFull() { return top == MAX; }
int isEmpty() { return top == -1; }

void push(int data) {
  if (isFull()) {
    printf("Stack overflow\n");
    exit(1);
  } else {
    top++;
  }
  stack[top] = data;
}
int pop() {
  int val;
  if (isEmpty()) {
    return -1;
  } else {
    val = stack[top];
    top--;
  }
  return val;
}
void display() {
  if (isEmpty()) {
    printf("Stack is empty:\n");
  } else {
    printf("Stack elements are:\n");
    for (int i = 0; i <= top; i++) {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}
void peek(){
    printf("Peek: %d\n", stack[top]);
}
int main() {
  push(10);
  push(20);
  push(50);
  pop();
  peek();
  display();
  return 0;
}
