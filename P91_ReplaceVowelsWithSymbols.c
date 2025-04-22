#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i]))
            str[i] = '*';
    }

    printf("Modified string: %s\n", str);
    return 0;
}

// Output:
// Enter a string: Hello World  
// Modified string: H*ll* W*rld
