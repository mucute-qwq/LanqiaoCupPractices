#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  while (1) {
    int num = 0;
    scanf("%d", &num);

    if (num <= 0) {
      break;
    }

    printf("%d\n", num);
  }
  return 0;
}
