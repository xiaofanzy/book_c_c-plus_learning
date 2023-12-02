#include<stdio.h>

#define SIZE 12

int main(void)
{
  int mounth[SIZE] = {31,28,31,30,31,31,31,31,31,31,31,31};

  for (int index = 0; index < SIZE; index++)
  {
    printf("The %d mounth has %d dyas.\n",index + 1, *(mounth + index));
  }
  

  return 0;
}