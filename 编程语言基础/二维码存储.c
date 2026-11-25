#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long line, column;
  scanf("%ld%ld", &line, &column);

  if (column % 32 != 0) {
    column += 32 - column % 32;
  }

  printf("%ld", line * column / 8);
  return 0;
}