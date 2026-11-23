#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int leapMonthDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int year = 2024, month = 6, day = 1, current = 6;
  while (1) {
    day += 7;

    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    if (isLeapYear) {
      if (day > leapMonthDays[month - 1]) {
        day -= leapMonthDays[month - 1];
        month++;
      }
    } else {
      if (day > monthDays[month - 1]) {
        day -= monthDays[month - 1];
        month++;
      }
    }

    if (month > 12) {
      year++;
      month = 1;
    }

    if (year > 2024 && month == 6 && day == 1) {
      break;
    }
  }

  printf("%d", year);
  return 0;
}