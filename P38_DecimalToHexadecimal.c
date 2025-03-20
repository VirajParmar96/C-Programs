#include <stdio.h>

void decimalToHexadecimal(int num) {
    char hex[32];
    int i = 0;

    if (num == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';
        num /= 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    printf("\n");
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decimalToHexadecimal(num);

    return 0;
}

// Output:
// Enter a decimal number: 255
// Hexadecimal: FF