#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int x, y;
    scanf("%d%d", &x, &y);
    if (x < y) {
      printf("YI\n");
    } else if (x == y) {
      printf("ANY\n");
    } else {
      printf("BRIDGE\n");
    }
  }

  return 0;
}
