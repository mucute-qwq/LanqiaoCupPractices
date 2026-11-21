#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int counts[] = {13, 1, 2, 3, 5, 4, 4, 2, 2, 2};
  int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int leapMonths[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int totalCount = 0;

  int year = 2000;
  int month = 1;
  int day = 0;
  while(1) {
    if (year == 2024 && month == 4 && day == 13) break;
    day++;

    int isLeapYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if (isLeapYear) {
      if (day > leapMonths[month - 1]) {
        day = 1;
        month++;
      }
    } else {
      if (day > months[month - 1]) {
        day = 1;
        month++;
      }
    }

    if (month > 12) {
      month = 1;
      year++;
    }

    int currentCount = counts[2] + counts[0] + counts[(int)((year - 2000) / 10)] + counts[(year - 2000) % 10];
    currentCount += counts[month / 10] + counts[month % 10];
    currentCount += counts[day / 10] + counts[day % 10];
    
    if (currentCount > 50) {
      totalCount++;
    }

  }

  printf("%d", totalCount);
  return 0;
}
