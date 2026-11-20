#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  unsigned long ms;
  scanf("%lu", &ms);
  

  int hh, mm, ss;
  hh = ms / 3600000L;
  mm = (ms % 3600000L) / 60000L;
  ss = (ms % 60000L) / 1000L;

  while (hh > 23) {
    hh -= 24;
  }

  printf("%02d:%02d:%02d", hh, mm, ss);

  return 0;
}
