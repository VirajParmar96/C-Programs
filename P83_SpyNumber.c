// A number is a Spy Number if the sum and product of its digits are equal.
// Example: 1124 → sum = 1+1+2+4 = 8, product = 1×1×2×4 = 8 → it's a Spy Number

#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if (sum == product)
        printf("%d is a Spy Number.\n", num);
    else
        printf("%d is not a Spy Number.\n", num);

    return 0;
}

// Output:
// Enter a number: 1124  
// 1124 is a Spy Number.
