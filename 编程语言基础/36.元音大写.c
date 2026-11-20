#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char str[101];
  scanf("%s", str);

  for (int i = 0;str[i] != '\0';i++) {
    char ch = str[i];
    switch(ch) {
      case 'a':
        str[i] = 'A';
      break;

      case 'e':
        str[i] = 'E';
      break;

      case 'i':
        str[i] = 'I';
      break;

      case 'o':
        str[i] = 'O';
      break;

      case 'u':
        str[i] = 'U';
      break;
    }
  }

  printf("%s", str);
  return 0;
}
