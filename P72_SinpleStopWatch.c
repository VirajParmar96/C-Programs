#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep()

int main() {
    int h = 0, m = 0, s = 0;

    while (1) {
        system("clear"); // or use "cls" for Windows
        printf("Stopwatch: %02d:%02d:%02d\n", h, m, s);
        sleep(1);
        s++;

        if (s == 60) {
            s = 0;
            m++;
        }
        if (m == 60) {
            m = 0;
            h++;
        }
    }

    return 0;
}

// Output (updates every second):
// Stopwatch: 00:00:00
// Stopwatch: 00:00:01
// ...
