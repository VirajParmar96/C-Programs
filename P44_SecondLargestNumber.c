#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int first = arr[0], second = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest == -1)
        printf("No second largest element found.\n");
    else
        printf("Second largest element is: %d\n", secondLargest);

    return 0;
}

// Output:
// Enter the number of elements: 5
// Enter 5 elements: 10 20 4 45 99
// Second largest element is: 45
