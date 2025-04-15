#include <stdio.h>

struct Date {
    int d, m, y;
};

int countLeapYears(struct Date date) {
    int years = date.y;

    if (date.m <= 2)
        years--;

    return years / 4 - years / 100 + years / 400;
}

int getTotalDays(struct Date date) {
    int monthDays[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
    long int n = date.y * 365 + date.d;

    for (int i = 0; i < date.m - 1; i++)
        n += monthDays[i];

    n += countLeapYears(date);

    return n;
}

int main() {
    struct Date date1, date2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.d, &date1.m, &date1.y);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.d, &date2.m, &date2.y);

    int days1 = getTotalDays(date1);
    int days2 = getTotalDays(date2);

    printf("Number of days between the two dates: %d\n", abs(days2 - days1));

    return 0;
}

// Output:
// Enter first date (dd mm yyyy): 01 01 2023  
// Enter second date (dd mm yyyy): 01 01 2024  
// Number of days between the two dates: 365
