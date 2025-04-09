#include <stdio.h>

void findPairs(int arr[], int size, int target) {
    printf("Pairs with sum %d:\n", target);
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 3, 5, 7, 8, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target sum: ");
    scanf("%d", &target);

    findPairs(arr, size, target);

    return 0;
}

// Output:
// Enter the target sum: 7
// Pairs with sum 7:
// (2, 5)
// (4, 3)
// (8, -1)
