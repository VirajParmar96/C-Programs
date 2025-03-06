#include <stdio.h>

int main() {
    int base, exponent, result = 1, i;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for (i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}

// Output:
// Enter base and exponent: 7 3
// 7^3 = 343