// This finds the max sum of any contiguous subarray in O(n) time.

#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int max_current = arr[0], max_global = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_current + arr[i])
            max_current = arr[i];
        else
            max_current += arr[i];

        if (max_current > max_global)
            max_global = max_current;
    }
    return max_global;
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = maxSubarraySum(arr, n);
    printf("Maximum subarray sum is: %d\n", result);

    return 0;
}

// Output:
// Enter number of elements: 9  
// Enter array elements:  
// -2 -3 4 -1 -2 1 5 -3 2  
// Maximum subarray sum is: 7
