#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number is not defined.\n");
    else
        printf("Factorial of %d is %lld\n", num, factorial(num));

    return 0;
}

// Output:
// Enter a number: 7
// Factorial of 7 is 5040