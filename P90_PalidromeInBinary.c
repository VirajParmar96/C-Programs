#include <stdio.h>

int isBinaryPalindrome(int n) {
    int binary[32], i = 0, j;

    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    for (j = 0; j < i / 2; j++) {
        if (binary[j] != binary[i - j - 1])
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isBinaryPalindrome(num))
        printf("%d is a binary palindrome.\n", num);
    else
        printf("%d is not a binary palindrome.\n", num);

    return 0;
}

// Output:
// Enter a number: 9  
// 9 is a binary palindrome.  // because binary of 9 is 1001
