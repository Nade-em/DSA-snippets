#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1, rear =-1;

void enqueue(int data){
  if(front == -1 && rear == -1){
    rear++;
    front = rear;
  }
  else if(rear == MAX-1){
    printf("Queue is full\n");
  }
  else{
    rear++;
  }
queue[rear] = data;  
}

int dequeue(){
  if(front == -1 && rear == -1){
    printf("Underflow\n");
  }
  else if(front == rear){
    front = -1;
    rear = front;
  }
  else{
    front++;
  }
  return queue[front];
}
void _front(){
    printf("front: %d\n", queue[front]);
}
void _rear(){
    printf("rear: %d\n",queue[rear]);
}
void display(){
  printf("Queue elements are:\n");
  for(int i =front; i<=rear; i++){
    printf("%d ", queue[i]);
  }
  printf("\n");
}
int main(){
enqueue(10);
  enqueue(2);
  enqueue(15);
  enqueue(25);
  display();
  dequeue();
  display();
  _front();
  _rear();
  return 0;
}