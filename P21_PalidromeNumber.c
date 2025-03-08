#include <stdio.h>

int main() {
    int num, reversed = 0, originalNum, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

    return 0;
}

// Output:
// Enter an integer: 13431
// 13431 is a palindrome number.