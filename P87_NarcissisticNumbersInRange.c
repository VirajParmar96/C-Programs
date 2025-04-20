// A number is called Narcissistic if the sum of its digits raised to the power of the number of digits is equal to the number itself.
// example => 153 = 1^3 + 5^3 + 3^3 = 153

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum, digits;

    printf("Narcissistic numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        // Count number of digits
        int n = temp;
        while (n > 0) {
            digits++;
            n /= 10;
        }

        temp = num;
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}


// Output:
// Narcissistic numbers between 1 and 1000:
// 1 2 3 4 5 6 7 8 9 153 370 371 407
