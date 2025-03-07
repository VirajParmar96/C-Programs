#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum > 0) {
        digit = originalNum % 10;
        sum += factorial(digit);
        originalNum /= 10;
    }

    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);

    return 0;
}

// Output:
// Enter a number: 145
// 145 is a Strong number.