#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL)
        printf("Stack Underflow\n");
    else {
        printf("Popped element: %d\n", top->data);
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }
}

void display() {
    if (top == NULL)
        printf("Stack is empty\n");
    else {
        struct Node* temp = top;
        printf("Stack elements are:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    push(10);
    push(20);
    display();
    pop();
    display();
    return 0;
}
