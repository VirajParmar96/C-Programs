// A number is happy if repeatedly replacing it with the sum of squares of its digits eventually reaches 1.

#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isHappy(num))
        printf("%d is a Happy Number\n", num);
    else
        printf("%d is Not a Happy Number\n", num);

    return 0;
}


// Output:
// Enter a number: 19  
// 19 is a Happy Number
