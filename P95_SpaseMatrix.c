// A matrix is sparse if most of its elements are 0.

#include <stdio.h>

int main() {
    int rows, cols, count = 0;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                count++;
        }
    }

    if (count > (rows * cols) / 2)
        printf("Matrix is Sparse\n");
    else
        printf("Matrix is Not Sparse\n");

    return 0;
}

// Output:
// Enter number of rows and columns: 3 3  
// Enter matrix elements:  
// 0 0 5  
// 0 0 0  
// 0 6 0  
// Matrix is Sparse
