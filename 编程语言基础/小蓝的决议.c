#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int n, x;
    scanf("%d%d", &n, &x);
    if (n - x <= x) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
