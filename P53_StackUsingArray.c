#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow! Cannot push %d\n", value);
    else
        stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Popped element: %d\n", pop());
    display();

    return 0;
}

// Output:
// Stack elements: 30 20 10
// Popped element: 30
// Stack elements: 20 10
