#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char str[1000000];
  scanf("%s", str);

  int counts[26];
  for (int i = 0;str[i] != '\0';i++) {
    char ch = str[i];
    int index = ch - 'a';
    counts[index]++;
  }

  for (int i = 0;i < 26;i++) {
    if (counts[i] % 2 != 0) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");

  return 0;
}
