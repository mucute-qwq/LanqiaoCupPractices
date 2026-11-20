#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char s[10];
  char t[1000];

  scanf("%s", s);
  scanf("%s", t);

  for (int i = 0;t[i] != '\0';i++) {
    char ch = t[i];
    for (int j = 0;j < 10;j++) {
      if (ch == '0' + j) {
        t[i] = s[j];
      }
    }
  }

  printf("%s", t);

  return 0;
}
