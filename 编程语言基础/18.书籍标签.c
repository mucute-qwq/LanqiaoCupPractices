#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  int lowestIndex = 1;
  float lowestPercent = -1;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int bookCount;
    int tagCount;
    scanf("%d%d", &bookCount, &tagCount);

    float percent = ((float) tagCount) / bookCount;
    if (lowestPercent < 0 || percent < lowestPercent) {
      lowestPercent = percent;
      lowestIndex = i + 1;
    }
  }

  printf("%d", lowestIndex);
  return 0;
}
