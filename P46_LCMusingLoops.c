#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, findLCM(num1, num2));

    return 0;
}

// Output:
// Enter two numbers: 12 15
// LCM of 12 and 15 is 60