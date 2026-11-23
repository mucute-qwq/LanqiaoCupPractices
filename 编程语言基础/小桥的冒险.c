#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int target, singleMax;
    scanf("%d%d", &target, &singleMax);

    printf("%d\n", (int)(target / singleMax) + target % singleMax);
  }

  return 0;
}