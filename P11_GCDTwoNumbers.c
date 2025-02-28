#include <stdio.h>

int main() {
    int num1, num2, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}

// Output:
// Enter two numbers: 42 56
// GCD of 42 and 56 is 14