// A magic square is a matrix in which the sums of all rows, columns, and diagonals are equal.

#include <stdio.h>

#define N 3

int isMagicSquare(int mat[N][N]) {
    int sum = 0, diag1 = 0, diag2 = 0;

    // Sum of first row
    for (int j = 0; j < N; j++) {
        sum += mat[0][j];
    }

    // Check rows and diagonals
    for (int i = 0; i < N; i++) {
        int rowSum = 0, colSum = 0;

        for (int j = 0; j < N; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];

            if (i == j) diag1 += mat[i][j];
            if (i + j == N - 1) diag2 += mat[i][j];
        }

        if (rowSum != sum || colSum != sum)
            return 0;
    }

    if (diag1 != sum || diag2 != sum)
        return 0;

    return 1;
}

int main() {
    int mat[N][N] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    if (isMagicSquare(mat))
        printf("The matrix is a magic square.\n");
    else
        printf("The matrix is NOT a magic square.\n");

    return 0;
}

// Output:
// The matrix is a magic square.
