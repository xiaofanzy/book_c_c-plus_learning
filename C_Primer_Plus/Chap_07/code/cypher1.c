#include <stdio.h>

#define SPACE ' '

int main(void)
{
  char ch;

  ch = getchar();

  while (ch !='\n')
  {
    if (ch == SPACE)  
    {
      putchar(ch);
    }
    else
    {
      putchar(ch + 1);
    }
    //还需要重新获取缓冲字符串的字符
    ch = getchar();

  }

  putchar('\n');
  

  return 0;
}