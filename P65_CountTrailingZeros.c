// This program finds how many zeros are at the end of n! without calculating the full factorial.

#include <stdio.h>

// Function to count trailing zeros in factorial of n
int countTrailingZeros(int n) {
    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of trailing zeros in %d! is %d\n", num, countTrailingZeros(num));

    return 0;
}

// Output:
// Enter a number: 100
// Number of trailing zeros in 100! is 24
