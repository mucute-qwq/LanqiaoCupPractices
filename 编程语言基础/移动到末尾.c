#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int len;
  scanf("%d", &len);

  int movedCount = 0;
  for (int i = 0;i < len;i++) {
    int current;
    scanf("%d", &current);
    if (current != 0) {
      printf("%d ", current);
      movedCount++;
    }
  }

  while (movedCount < len) {
    printf(movedCount + 1 >= len ? "0" : "0 ");
    movedCount++;
  }

  return 0;
}
