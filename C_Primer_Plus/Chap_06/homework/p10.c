#include <stdio.h>

#define SIZE 8

int main(void)
{
  int list[SIZE];
  int index;

  

  for(index = 0;index < SIZE;index++)
  {
    printf("Enter the eight num:\n");
    scanf("%d", &list[index]);
  }

  for(index = SIZE;index >= 0;index--)
  {
    printf("%d\n",list[index]);
  }

  return 0;
}