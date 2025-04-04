// A palindrome is a word that reads the same forward and backward. This program finds the longest palindromic substring in a given string.
#include <stdio.h>
#include <string.h>

// Function to expand around center and find the longest palindrome
void findLongestPalindrome(char str[]) {
    int len = strlen(str);
    int start = 0, maxLength = 1;

    for (int i = 0; i < len; i++) {
        // Odd length palindrome
        int low = i, high = i;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }

        // Even length palindrome
        low = i, high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
    }

    printf("Longest palindromic substring: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    findLongestPalindrome(str);

    return 0;
}

// Output:
// Enter a string: babad
// Longest palindromic substring: bab

// Enter a string: cbbd
// Longest palindromic substring: bb
