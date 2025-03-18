#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    int sum = 0, originalNum = num;
    int digits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        // sum += pow(digit, digits);             
        /*  Since pow() returns a double, the result might not always be accurate when assigned to an int.
            This can cause small floating-point precision errors,
            leading to incorrect results like pow(5, 3) = 124.9999, 
            which when converted to int, becomes 124 instead of 125.
            So, due to that we defined a function name 'power'.       */
        sum += power(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

// Output:
// Enter a number: 153
// 153 is an Armstrong number.
