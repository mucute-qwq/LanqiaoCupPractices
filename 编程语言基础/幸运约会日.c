#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);

    int yearSum = year % 10 + year / 10 % 10 + year / 100 % 10 + year / 1000 % 10;
    int monthSum = month % 10 + month / 10 % 10;
    int daySum = day % 10 + day / 10 % 10;

    if (yearSum == monthSum && monthSum == daySum) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}