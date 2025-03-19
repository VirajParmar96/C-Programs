#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, digit;

    while (binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    return decimal;
}

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));

    return 0;
}

// Output:
// Enter a binary number: 1010
// Decimal equivalent: 10