#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count = 0;
  for (int i = 1;i < 2026;i++) {
    if (i % 3 == 0 || i % 8 == 0 || i % 38 == 0) {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
