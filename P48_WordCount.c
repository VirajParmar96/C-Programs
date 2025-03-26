#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] == '\0'))
            count++;
    }

    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    printf("Total words: %d\n", countWords(str));

    return 0;
}

// Output:
// Enter a string: This is a C programming example
// Total words: 5
