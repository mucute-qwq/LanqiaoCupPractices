#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  for (int i = 0;i < count;i++) {
    int battery, distance;
    scanf("%d%d", &battery, &distance);
    if (battery * 5 >= distance) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
