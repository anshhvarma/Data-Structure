#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if ((front == 0 && rear == MAX - 1) || (rear == front - 1))
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1)
        printf("Queue Underflow\n");
    else {
        printf("Dequeued: %d\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue elements are:\n");
        int i = front;
        while (i != rear) {
            printf("%d\n", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    display();
    dequeue();
    display();
    return 0;
}
