#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int day, month, year;
    
    printf("Enter day: ");
    scanf("%d", &day);
    
    printf("Enter month: ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month]) {
        printf("Invalid date.\n");
        return 1;
    }
    
    int totalDays = 0;
    
    // Calculate days for each month in the current year
    for (int m = 1; m < month; m++) {
        totalDays += daysInMonth[m];
        if (m == 2 && isLeapYear(year)) {
            totalDays++; // February has an extra day in leap years
        }
    }
    
    // Add the day of the input date
    totalDays += day;
    
    printf("Total days in the year: %d\n", totalDays);
    
    return 0;
}
    