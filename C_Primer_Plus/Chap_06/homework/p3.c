#include <stdio.h>
#define ROW 6

int main(void)
{
  int index,index_j;
  char ch;

  for(index = 0; index < ROW;index++)
  {
    for(ch = 'F',index_j = 0;index_j <= index;)
       printf("%c",ch + index_j++);
    printf("\n");
  }

  return 0;
}