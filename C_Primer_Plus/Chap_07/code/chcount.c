#include <stdio.h>

#define PERIOD '.'

int main(void)
{

  int ch;
  int chcount = 0;

  while ((ch = getchar()) != PERIOD)
  {
    if (ch != '*' && ch != '\'')
    {
      chcount++;
    }
  }
  
  printf("There are %d characters.\n", chcount);

  return 0;
}