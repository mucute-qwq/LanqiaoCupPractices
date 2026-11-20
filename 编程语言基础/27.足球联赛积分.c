#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int winCount, drawCount, failureCount;
  scanf("%d%d%d", &winCount, &drawCount, &failureCount);

  printf("%d", winCount * 3 + drawCount * 1 + failureCount * 0);

  return 0;
}
