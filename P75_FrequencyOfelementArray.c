#include <stdio.h>

int main() {
    int arr[] = {3, 5, 3, 2, 8, 5, 6, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited = -1;

    printf("Element Frequencies:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] == visited)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = visited;
            }
        }
        printf("%d appears %d times\n", arr[i], count);
    }

    return 0;
}

// Output:
// Element Frequencies:
// 3 appears 2 times  
// 5 appears 2 times  
// 2 appears 3 times  
// 8 appears 1 times  
// 6 appears 1 times
