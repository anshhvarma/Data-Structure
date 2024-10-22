#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped element: %d\n", stack[top--]);
}

void display() {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
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
