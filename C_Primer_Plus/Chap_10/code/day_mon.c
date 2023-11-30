#include <stdio.h>

#define SIZE 12

int main(void)
{
  int day_mounth[SIZE] = {30,30,30,30,30,30,30,30,30,30,30,30};

  for (int index = 0; index < SIZE; index++)
  {
    printf("The %d mounth has %d dyas.\n", index+1, day_mounth[index]);
  }
  
  return 0;
}