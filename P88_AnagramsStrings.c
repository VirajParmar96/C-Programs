// An anagram is when two strings have the same characters in any order.
// Example: listen and silent

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf(" %s", str1);

    printf("Enter second string: ");
    scanf(" %s", str2);

    // Convert to lowercase
    for (int i = 0; str1[i]; i++) str1[i] = tolower(str1[i]);
    for (int i = 0; str2[i]; i++) str2[i] = tolower(str2[i]);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams.\n");
    } else {
        sortString(str1);
        sortString(str2);

        if (strcmp(str1, str2) == 0)
            printf("The strings are anagrams.\n");
        else
            printf("Not anagrams.\n");
    }

    return 0;
}


// Output:
// Enter first string: Listen  
// Enter second string: Silent  
// The strings are anagrams.
