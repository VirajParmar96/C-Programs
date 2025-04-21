#include <stdio.h>

int main() {
    int arr[100], n, i, j, maxCount = 0, freq, mostFreq;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        freq = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                freq++;
        }
        if (freq > maxCount) {
            maxCount = freq;
            mostFreq = arr[i];
        }
    }

    printf("Most frequent element: %d (appeared %d times)\n", mostFreq, maxCount);
    return 0;
}

// Output:
// Enter number of elements: 6  
// Enter 6 elements: 2 3 2 5 2 3  
// Most frequent element: 2 (appeared 3 times)
