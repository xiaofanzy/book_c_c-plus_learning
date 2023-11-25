#include <stdio.h>
#include <math.h>

#define SIZE 8

int main(void)
{
  int arr[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    arr[i] = pow(2,i);
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\t",arr[i]);
  }

  return 0;
}