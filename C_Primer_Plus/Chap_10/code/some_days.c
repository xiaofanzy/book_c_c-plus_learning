#include <stdio.h>

#define SIZE 4

int main(void)
{
  int index;
  int some_date[SIZE] = {12,13};

  for ( index = 0; index < SIZE; index++)
  {
    printf("The %d is %d.\n",index+1,some_date[index]);
  }
  

  return 0;
}