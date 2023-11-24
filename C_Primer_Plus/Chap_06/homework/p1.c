#include <stdio.h>

#define SIZE 26

int main(void)
{
  char ch[SIZE];
  int index;
  char character = 'a';
  for(index = 0;index < SIZE;index++)
    ch[index] = character++;

   for(index = 0;index < SIZE;index++)
     printf("%5c",ch[index]);

  return 0;
}