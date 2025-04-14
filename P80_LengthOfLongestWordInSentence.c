#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currLen++;
        } else {
            if (currLen > maxLen)
                maxLen = currLen;
            currLen = 0;
        }
    }

    // Check last word
    if (currLen > maxLen)
        maxLen = currLen;

    printf("Length of the longest word: %d\n", maxLen);

    return 0;
}

// Ouptut:
// Enter a sentence: Keep learning every day
// Length of the longest word: 8
