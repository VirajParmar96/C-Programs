#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) 
            front = 0;
        queue[++rear] = value;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1;
    }
    return queue[front++];
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    printf("Dequeued element: %d\n", dequeue());
    display();

    return 0;
}

// Output:
// Queue elements: 10 20 30
// Dequeued element: 10
// Queue elements: 20 30
