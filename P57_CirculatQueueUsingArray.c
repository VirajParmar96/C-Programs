#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }
    if (front == -1) 
        front = rear = 0;
    else
        rear = (rear + 1) % MAX;
    
    queue[rear] = value;
}

int dequeue() {
    if (front == -1) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1;
    }
    int data = queue[front];
    if (front == rear)
        front = rear = -1; 
    else
        front = (front + 1) % MAX;
    
    return data;
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Circular Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();

    printf("Dequeued element: %d\n", dequeue());
    display();

    enqueue(60);
    display();

    return 0;
}

// Output:
// Circular Queue elements: 10 20 30 40 50
// Dequeued element: 10
// Circular Queue elements: 20 30 40 50
// Circular Queue elements: 20 30 40 50 60
