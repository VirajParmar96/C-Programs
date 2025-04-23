#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

int main() {
    char str[200];
    int start = 0, i;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}


// Output:
// Enter a sentence: Hello World from C  
// Reversed words: olleH dlroW morf C
