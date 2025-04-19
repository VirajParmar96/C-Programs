#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}

// Output:
// Enter a string: HeLLo WoRLd  
// Toggled case string: hEllO wOrlD
