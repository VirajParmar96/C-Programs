// Pascal’s Triangle is a triangular array of binomial coefficients.

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void generatePascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    generatePascalsTriangle(rows);

    return 0;
}


// Output:
// Enter number of rows: 5
//            1
//          1   1
//        1   2   1
//      1   3   3   1
//    1   4   6   4   1