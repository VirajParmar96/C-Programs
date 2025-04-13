#include <stdio.h>

void replaceChar(char *str, char find, char replace) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == find)
            str[i] = replace;
    }
}

int main() {
    char str[100], find, replace;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter character to find: ");
    scanf(" %c", &find);
    printf("Enter character to replace with: ");
    scanf(" %c", &replace);

    replaceChar(str, find, replace);
    printf("Updated string: %s\n", str);

    return 0;
}

// Ouput:
// Enter a string: hello
// Enter character to find: l
// Enter character to replace with: x
// Updated string: hexxo
