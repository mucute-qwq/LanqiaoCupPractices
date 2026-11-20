#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int t;
    scanf("%d", &t);
    if (t > 24) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
