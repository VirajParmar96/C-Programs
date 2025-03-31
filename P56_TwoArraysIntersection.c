#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    printf("Intersection of the two arrays: ");
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // Avoid duplicate printing
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}

// Output:
// Intersection of the two arrays: 3 5 7
