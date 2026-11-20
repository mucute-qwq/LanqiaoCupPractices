#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int lineCount;
  int abbCount = 0;
  scanf("%d", &lineCount);

  char s[4];
  for (int i = 0;i < lineCount;i++) {
    scanf("%s", s);
    if (s[0] != s[1] && s[1] == s[2]) {
      abbCount++;
    }
  }

  printf("%d", abbCount);
  return 0;
}
