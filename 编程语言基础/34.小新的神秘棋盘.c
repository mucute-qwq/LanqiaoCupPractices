#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int a, b, p, q;
    scanf("%d%d%d%d", &a, &b, &p, &q);
    if (a == p && b == q) {
      printf("0\n");
      continue;
    }
    
    int current = (a + b) % 2 == 0;
    int target = (p + q) % 2 == 0;

    if (current == target) {
      printf("2\n");
      continue;
    }

    printf("1\n");

  }

  return 0;
}
