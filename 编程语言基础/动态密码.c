#include <stdio.h>
#include <stdlib.h>

void print(long num) {
  if (num > 0) {
    print(num / 2);
    printf("%d", num % 2);
  }
}

int main(int argc, char *argv[])
{
  print(20241111);
  return 0;
}
