# Stack Data Structure

A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. In a stack, elements are added and removed from the same end, known as the top. The most recently added element is the first one to be removed.

## Basic Operations

A stack supports the following fundamental operations:

1. **Push:** Add an element to the top of the stack.
2. **Pop:** Remove the element from the top of the stack.
3. **Peek or Top:** Retrieve the element from the top of the stack without removing it.
4. **isEmpty:** Check if the stack is empty.
5. **isFull:** Check if the stack is full (often relevant in fixed-size implementations).

## Visualization

A visual representation of a stack can be imagined as a collection of elements stacked on top of each other, similar to a stack of plates. The element at the top is the one accessible for operations.


## Use Cases

Stacks are commonly used in various applications, including:

- **Function Call Stack:** Keeps track of function calls in programming languages.
- **Undo Mechanisms:** Supports undo operations in applications.
- **Expression Evaluation:** Helps evaluate arithmetic expressions.
- **Backtracking Algorithms:** Facilitates backtracking in algorithms.

## Implementation

A stack can be implemented using arrays or linked lists. The choice of implementation depends on the requirements and constraints of the specific use case.

### Array Implementation

In an array-based implementation, an array with a fixed size is used to store the elements of the stack. The top of the stack is represented by an index variable.

### Linked List Implementation

In a linked list-based implementation, each element of the stack is a node with a data field and a reference to the next node in the sequence. The top of the stack is the first node in the list.

## Complexity

The time complexity of basic stack operations (push, pop, peek) is O(1), making stacks efficient for certain applications.

Stacks play a crucial role in algorithm design and are an essential concept in computer science.

### Code
```c
// stack using linked list
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void push(struct Node** top, int ele){
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = ele;
    newNode->next = *top;
    *top = newNode;
printf("Successfully inserted %d\n", ele);

}
int pop(struct Node** top){
    if(!isEmpty(top)){
        struct Node*temp = *top;
        int data = temp->data;
        *top = temp->next;
        free(temp);
        printf("removed %d\n", data);
        return data;
    }
    return -1;
}
void traverse(struct Node* top){

    while(top !=NULL){
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}
int peek(struct Node* top){
    return top->data;
}
int isEmpty(struct Node* top){
    return top == NULL;
}
int main(){
struct Node* top = NULL;
    push(&top , 7);
    push(&top , 18);
    push(&top , 70);
    traverse(top);
    pop(&top);
    traverse(top);
    printf("peek element is: %d\n", peek(top));
    return 0;
}
```