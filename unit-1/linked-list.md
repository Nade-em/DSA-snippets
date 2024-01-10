# Linked List Data Structure

A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node in the sequence. Unlike arrays, linked lists do not have a fixed size, and elements can be dynamically added or removed.

## Basic Components

A node in a linked list consists of two main components:

1. **Data:** Holds the value or information.
2. **Next Pointer:** Points to the next node in the sequence.

## Types of Linked Lists

There are various types of linked lists, including:

- **Singly Linked List:** Each node points to the next node.
- **Doubly Linked List:** Each node points to both the next and the previous nodes.
- **Circular Linked List:** The last node points back to the first node, forming a loop.

## Basic Operations

Linked lists support the following fundamental operations:

1. **Insertion:** Add a new node to the list.
2. **Deletion:** Remove a node from the list.
3. **Traversal:** Visit each node in the list.
4. **Search:** Find a specific element in the list.


## Use Cases

Linked lists are commonly used in scenarios where dynamic memory allocation and frequent insertions/deletions are required. Some use cases include:

- **Dynamic Memory Management:** Allocation and deallocation of memory.
- **Implementation of Other Data Structures:** Stacks, queues, and symbol tables.
- **Undo Mechanisms:** Supporting undo operations in applications.

## Implementation

Linked lists can be implemented using structures or classes, with each node containing data and a reference to the next node.

### Code

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void print(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int isFull(struct Node** head) {
    return *head == NULL;
}
int isEmpty(struct Node** head){
    return *head == NULL;
}
void push(struct Node** head, int ele) {  // Adds an element at the beginning of the list.
    if (!isFull(head)) {
        struct Node* temp;
        temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = ele;
        temp->next = *head;
        *head = temp;
        printf("Inserted %d Successfully\n", ele);
    } else {
        printf("Linked List is full\n");
    }
}
int pop(struct Node** head){
    if(isEmpty(head)){
        printf("List is Empty\n");
        return -1;
    }
    else{
        struct Node* temp = *head ;
        int data = temp->data;
        *head =  temp->next;
        free(temp);
        printf("Popped %d Successfully\n", data);
        return data;
    }
}

int main() {
    // declares a pointer to a struct Node
    struct Node* head = NULL;
    struct Node* one;
    struct Node* two;
    struct Node* three;

    // allocate memory for nodes in the linked list in heap
    one = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));

    // assign data values
    one->data = 5;
    two->data = 10;
    three->data = 15;

    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;

    // linked list function calls
    push(&head, 100);
    push(&head, 200);
    print(head);
    pop(&head);
    print(head);

    return 0;
}

```

