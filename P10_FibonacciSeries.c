#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %lld %lld ", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}

// Output:
// Enter the number of terms: 7
// Fibonacci Series: 0 1 1 2 3 5 8 