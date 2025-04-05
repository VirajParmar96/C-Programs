// This classic encryption technique shifts characters by a fixed key value. Simple and fun!

#include <stdio.h>
#include <string.h>

void encrypt(char str[], int key) {
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            str[i] = (c - 'a' + key) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            str[i] = (c - 'A' + key) % 26 + 'A';
        }
    }
}

int main() {
    char str[100];
    int key;

    printf("Enter a string to encrypt: ");
    scanf("%s", str);

    printf("Enter key (number of positions to shift): ");
    scanf("%d", &key);

    encrypt(str, key);

    printf("Encrypted string: %s\n", str);

    return 0;
}

// Output:
// Enter a string to encrypt: Hello
// Enter key (number of positions to shift): 3
// Encrypted string: Khoor
