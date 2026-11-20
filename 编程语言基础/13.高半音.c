#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char s;
  scanf("%c", &s);

  if (s == 'E') {
    printf("F");
  } else if (s == 'B') {
    printf("C");
  } else {
    printf("%c#", s);
  }

  return 0;
}
