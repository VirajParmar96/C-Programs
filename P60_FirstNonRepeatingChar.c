#include <stdio.h>
#include <string.h>

#define MAX 256 // Total ASCII characters

char firstNonRepeating(char str[]) {
    int freq[MAX] = {0};

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1)
            return str[i];
    }
    return '\0'; // No non-repeating character found
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    char result = firstNonRepeating(str);

    if (result)
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");

    return 0;
}


// Output:
// Enter a string: programming
// First non-repeating character: p
// Enter a string: aabbcc
// No non-repeating character found.
