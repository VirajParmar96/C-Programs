// A Strong Number is a number where the sum of the factorials of its digits equals the original number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int isStrong(int num) {
    int sum = 0, temp = num;

    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrong(num))
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}

// Output:
// Enter a number: 145
// 145 is a Strong Number.
