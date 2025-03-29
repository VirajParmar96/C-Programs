#include <stdio.h>
#include <string.h>

char firstNonRepeatingChar(char str[]) {
    int freq[256] = {0}; // ASCII size

    for (int i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1)
            return str[i];
    }
    
    return '\0';
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    char result = firstNonRepeatingChar(str);

    if (result)
        printf("First non-repeating character: %c\n", result);
    else
        printf("No unique character found.\n");

    return 0;
}

// Output:
// Enter a string: swiss
// First non-repeating character: w
