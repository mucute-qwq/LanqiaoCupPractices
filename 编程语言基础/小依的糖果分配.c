#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", 10 * x + 90 * y);
  }

  return 0;
}
