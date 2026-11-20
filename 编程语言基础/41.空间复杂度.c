#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count;
  scanf("%d", &count);

  char s[3];

  for (int i = 0;i < count;i++) {
    long x, y;
    scanf("%ld%s%ld", &x, s, &y);
    
    long format = 1;
    if (s[0] == 'K') {
      format  = 1024;
    } else if (s[0] == 'M') {
      format = 1024 * 1024;
    }

    long maxLen = x * format / y;
    printf("%ld\n", maxLen);
  }

  return 0;
}
