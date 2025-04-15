#include <stdio.h>

int main() {
    int n, matrix[10][10];
    int mainDiag = 0, secDiag = 0;

    printf("Enter size of square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        mainDiag += matrix[i][i];
        secDiag += matrix[i][n - i - 1];
    }

    printf("Sum of main diagonal: %d\n", mainDiag);
    printf("Sum of secondary diagonal: %d\n", secDiag);

    return 0;
}

// Output:
// Enter size of square matrix (max 10): 3  
// Enter matrix elements:  
// 1 2 3  
// 4 5 6  
// 7 8 9  
// Sum of main diagonal: 15  
// Sum of secondary diagonal: 15
