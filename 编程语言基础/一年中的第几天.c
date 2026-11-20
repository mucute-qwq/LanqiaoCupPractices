#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  while (1) {
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    if (year == 0 && month == 0 && day == 0) break;
    int currentDay = day;
    for (int i = 0;i < month - 1;i++) {
      currentDay += monthDays[i];
      if (i == 1 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        currentDay++;
      }
    }
    
    printf("%d\n", currentDay);
  }

  return 0;
}
