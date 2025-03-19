#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num, digit;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed == original;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}

// Output:
// Enter a number: 12321
// 12321 is a palindrome number.