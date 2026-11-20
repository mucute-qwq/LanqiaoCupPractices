#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char source[100000];
  scanf("%s", source);

  for (int i = 0;source[i] != '\0';i++) {
    char ch = source[i];
    if (ch >= 'a' && ch <= 'z') {
      source[i] = 'L';
    } else if (ch >= '0' && ch <= '9') {
      source[i] = 'Q';
    }
  }

  printf("%s", source);
  return 0;
}
