#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char s[101];

  scanf("%s", s);

  for (int i = 0;i < 101;i++) {
    if (s[i] == '\0') {
      if (s[i - 1] == '0') {
        s[i - 1] = '1';
      } else {
        s[i - 1] = '0';
      }
      break;
    }
  }

  printf("%s", s);

  return 0;
}
