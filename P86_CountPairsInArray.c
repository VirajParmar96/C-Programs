#include <stdio.h>

int main() {
    int arr[100], n, sum, count = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the target sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum)
                count++;
        }
    }

    printf("Number of pairs with sum %d: %d\n", sum, count);

    return 0;
}

// Output:
// Enter number of elements in array: 5  
// Enter array elements: 1 5 7 -1 5  
// Enter the target sum: 6  
// Number of pairs with sum 6: 3
