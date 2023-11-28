#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;

  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
    {
      putchar(++ch);
    }
    else
    {
      putchar(ch);
    }
  }

  printf("\n");

  return 0;
  
}