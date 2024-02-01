```markdown
# Queue Implementation using Array

This C program demonstrates the implementation of a queue using an array.

### Queue Operations:

#### 1. `enqueue(int data)`:
   - Adds an element to the rear of the queue.
   - Conditions:
     - If the queue is initially empty, sets both front and rear to 0.
     - If the queue is full, displays "Queue is full."

#### 2. `dequeue()`:
   - Removes and returns the element from the front of the queue.
   - Conditions:
     - If the queue is empty, displays "Queue is empty."
     - If there is only one element in the queue, resets both front and rear to -1.
     - Otherwise, retrieves the value from the front and increments front.

#### 3. `display()`:
   - Displays all elements in the queue.
   - Conditions:
     - If the queue is empty, displays "Queue is empty."
     - Otherwise, iterates through the queue and prints each element.

### Queue Characteristics:
- Maximum Size: 10 (defined as `MAX`).
- Overflow Handling: Displays "Queue is full" when attempting to enqueue into a full queue.
- Underflow Handling: Displays "Queue is empty" when attempting to dequeue from an empty queue.

### Sample Usage:

**Note:** Adjust the `MAX` macro to change the maximum size of the queue.
```
```
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
```