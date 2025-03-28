#include <stdio.h>
#include <string.h>

void countFrequency(char str[]) {
    int freq[256] = {0}; // ASCII size

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c : %d\n", i, freq[i]);
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    countFrequency(str);

    return 0;
}

// Output:
// Enter a string: apple
// Character Frequencies:
// a : 1
// p : 2
// l : 1
// e : 1
