// Two strings are anagrams if they contain the same characters in different orders.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 256

bool areAnagrams(char str1[], char str2[]) {
    int count[SIZE] = {0};

    if (strlen(str1) != strlen(str2))
        return false;

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    for (int i = 0; i < SIZE; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}


// Output:
// Enter first string: listen
// Enter second string: silent
// Strings are anagrams.
