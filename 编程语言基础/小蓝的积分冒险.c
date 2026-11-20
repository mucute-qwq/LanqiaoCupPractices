#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int x, y ,z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d\n", x * 4 + y * 2 + z * 0);
  }

  return 0;
}
