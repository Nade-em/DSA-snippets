


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
