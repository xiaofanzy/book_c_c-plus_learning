#include <stdio.h>
#include <string.h>

#define SIZE 255

int main(void)
{
  char ch[SIZE];
  int ch_size = 0;

  scanf("%s",ch);

  ch_size = strlen(ch);

  for (int i = ch_size; i >= 0; i--)
  {
    printf("%c",ch[i]);
  }
  


  return 0;
}