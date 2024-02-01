#include <stdio.h>
#define MAX 10
int queue[MAX];
int front =-1, rear=-1;


void enqueue(int data){
  if(front == -1 && rear == -1){
    rear++;
    front = rear;
  }
  else if((rear+1)%MAX == front){
    printf("Queue is full\n");
  }
  else{
    rear = (rear+1)%MAX;
  }
  queue[rear] = data;
}

int dequeue(){
int val;
  if(front == -1 && rear == -1){
  printf("Queue is empty\n");
}
  else if(front == rear){
    front = rear =-1;
  }
  else{
    val = queue[front];
    front = (front+1)% MAX;
  }
  return val;
}
void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements are:\n");
        for(int i =front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
enqueue(10);
  enqueue(2);
  enqueue(15);
  enqueue(25);
  display();
  dequeue();
  display();
  return 0;
}