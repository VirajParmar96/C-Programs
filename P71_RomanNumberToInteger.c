#include <stdio.h>
#include <string.h>

int value(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}

int romanToInt(char roman[]) {
    int total = 0;
    for (int i = 0; i < strlen(roman); i++) {
        int s1 = value(roman[i]);
        int s2 = value(roman[i + 1]);

        if (s1 < s2) {
            total += (s2 - s1);
            i++; // skip next character
        } else {
            total += s1;
        }
    }
    return total;
}

int main() {
    char roman[20];
    printf("Enter Roman numeral: ");
    scanf("%s", roman);

    printf("Integer value: %d\n", romanToInt(roman));
    return 0;
}

// Output:
// Enter Roman numeral: XLII
// Integer value: 42
