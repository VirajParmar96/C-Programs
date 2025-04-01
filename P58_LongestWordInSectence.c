#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]) {
    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    findLongestWord(str);

    return 0;
}

// Output:
// Enter a sentence: The quick brown fox jumped over the lazy dog
// Longest word: jumped
