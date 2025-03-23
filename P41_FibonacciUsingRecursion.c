#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n == 0)
        return;
    
    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci(n, 0, 1);

    printf("\n");
    return 0;
}

// Output:
// Enter the number of terms: 7
// Fibonacci Series: 0 1 1 2 3 5 8 