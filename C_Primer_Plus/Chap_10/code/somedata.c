#include <stdio.h>

#define SIZE 4

int main(void)
{
  int some_data[SIZE] = {4296,1066};

  for (int i = 0; i < SIZE; i++)
  {
    printf("%2d,%14d\n",i,some_data[i]);
  }
  

  return 0;
}