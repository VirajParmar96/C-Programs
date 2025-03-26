#include <stdio.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // Convert lowercase to uppercase
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    toUpperCase(str);

    printf("Uppercase String: %s\n", str);

    return 0;
}

// Output:
// Enter a string: hello world
// Uppercase String: HELLO WORLD
