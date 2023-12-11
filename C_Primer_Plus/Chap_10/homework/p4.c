#include <stdio.h>

#define SIZE 2

double max_double_value(double *pt,int size);

int main(void)
{
  double arr[SIZE] = {1.1,2.2};
  double max_value;

  max_value = max_double_value(arr,SIZE);
  
  printf("The max value is %.2f.\n",max_value);

  return 0;
}

double max_double_value(double *pt,int size)
{
  double max = *pt;

  for (int i = 0; i < size; i++)
  {
    max = max > *(pt + i) ? max : *(pt + i);
  }

  return max;
  
}