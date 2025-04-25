// Given an array, rotate the elements to the left by k positions.

#include <stdio.h>

void rotateLeft(int arr[], int n, int k) {
    int temp[100];

    for (int i = 0; i < n; i++)
        temp[i] = arr[(i + k) % n];

    printf("Array after rotating left by %d positions:\n", k);
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);
}

int main() {
    int arr[100], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    rotateLeft(arr, n, k);

    return 0;
}

// Output:
// Enter size of array: 5  
// Enter array elements: 1 2 3 4 5  
// Enter number of positions to rotate: 2  
// Array after rotating left by 2 positions:  
// 3 4 5 1 2
