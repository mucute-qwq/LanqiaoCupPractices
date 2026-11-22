#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int total = 0;
  int totalDays = -1;
  int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (int month = 1;month <= 12;month++) {
    int days = monthDays[month - 1];
    
    for (int day = 1;day <= days;day++) {
      totalDays++;
      if (totalDays % 7 == 1 || month % 10 == 1 || month / 10 % 10 == 1 || day % 10 == 1 || day / 10 % 10 == 1) {
        total += 5;
      } else {
        total += 1;
      }
    }
  }
  printf("%d", total);
  return 0;
}