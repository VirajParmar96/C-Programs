#include <stdio.h>

void decimalToOctal(int num) {
    int octal[32], i = 0;

    if (num == 0) {
        printf("Octal: 0\n");
        return;
    }

    while (num > 0) {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);

    printf("\n");
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decimalToOctal(num);

    return 0;
}

// Output:
// Enter a decimal number: 100
// Octal: 144