#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  int step1 = 0, step2 = 0, step3 = 0;
  int minCount = 0;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int kind;
    scanf("%d", &kind);
    switch (kind) {
      case 0:
        step2++;
        step3 += 2;
      break;
      case 1:
        step1 += 2;
        step3++;
      break;
      case 2:
        step1++;
        step2 += 2;
      break;
    }
  }

  if (step1 < step2) {
    minCount = step1;
  } else {
    minCount = step2;
  }

  if (minCount > step3) {
    minCount = step3;
  }

  printf("%d", minCount);

  return 0;
}