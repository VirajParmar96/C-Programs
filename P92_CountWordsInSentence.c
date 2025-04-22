#include <stdio.h>

int main() {
    char str[200];
    int count = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '\t') && str[i+1] != ' ' && str[i+1] != '\0')
            count++;
    }

    if (str[0] != ' ')
        count++;

    printf("Number of words: %d\n", count);
    return 0;
}

// Output:
// Enter a sentence: This is a sample C program  
// Number of words: 6
