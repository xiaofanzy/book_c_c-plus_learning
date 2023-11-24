#include <stdio.h>

#define SIZE 6

int main(void)
{
  char ch[SIZE];
  int index,row,colu;

  for(index = 0;index < SIZE;index++)
    ch[index] = 'F' + index;

  for(row = 0;row < SIZE;row++)
  {
    for(colu = 0; colu <= row;colu++)
      printf("%c",ch[colu]);
    printf("\n");
  }


  return 0;
}