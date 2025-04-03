#include <stdio.h>

void findMostFrequent(int arr[], int size) {
    int maxCount = 0, mostFrequent = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("Most frequent element: %d (appeared %d times)\n", mostFrequent, maxCount);
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 5, 3, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMostFrequent(arr, size);

    return 0;
}

// Output:
// Most frequent element: 2 (appeared 5 times)
