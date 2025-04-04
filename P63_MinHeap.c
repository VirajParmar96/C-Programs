#include <stdio.h>

#define MAX 100

int heap[MAX], size = 0;

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to insert an element into the Min Heap
void insert(int value) {
    if (size >= MAX) {
        printf("Heap is full!\n");
        return;
    }

    heap[size] = value;
    int i = size;
    size++;

    // Heapify up
    while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to print the heap elements
void printHeap() {
    printf("Min Heap Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(15);
    insert(30);
    insert(40);
    insert(5);
    insert(25);

    printHeap();

    return 0;
}

// Output:
// Min Heap Elements: 5 10 15 30 40 20 25
