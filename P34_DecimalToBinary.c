#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32], i = 0;

    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    printf("\n");
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}

// Output:
// Enter a decimal number: 48
// Binary: 110000