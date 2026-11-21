#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  int totalPrice = 0;
  for (int i = 0;i < count;i++) {
    int price;
    scanf("%d", &price);
    totalPrice += price;
  }

  printf("%d", totalPrice);

  return 0;
}
