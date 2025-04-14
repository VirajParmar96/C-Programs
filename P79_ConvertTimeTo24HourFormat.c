#include <stdio.h>
#include <string.h>

void convertTo24Hour(char time[]) {
    int hour, minute;
    char period[3];

    sscanf(time, "%d:%d%2s", &hour, &minute, period);

    if (strcmp(period, "PM") == 0 && hour != 12)
        hour += 12;
    else if (strcmp(period, "AM") == 0 && hour == 12)
        hour = 0;

    printf("24-Hour format: %02d:%02d\n", hour, minute);
}

int main() {
    char time[10];

    printf("Enter time in 12-hour format (e.g., 07:45PM): ");
    scanf("%s", time);

    convertTo24Hour(time);

    return 0;
}

// Output:
// Enter time in 12-hour format (e.g., 07:45PM): 12:30AM  
// 24-Hour format: 00:30
