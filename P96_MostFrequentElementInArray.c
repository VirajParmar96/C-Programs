// This program finds the element that appears the most in an array along with its frequency.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, maxCount = 0, freqElement;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount) {
            maxCount = count;
            freqElement = arr[i];
        }
    }

    printf("Most frequent element is %d (appears %d times)\n", freqElement, maxCount);
    return 0;
}

// Output:
// Enter the number of elements: 7  
// Enter 7 elements:  
// 1 3 2 3 4 3 5  
// Most frequent element is 3 (appears 3 times)
