#include <stdio.h>

#define SIZE 3

double difference_value(double pt[], int size);

int main(void)
{
  double arr[SIZE] = {1.1, 2.2,33.1};
  double difference;

  difference = difference_value(arr,SIZE);

  printf("The arr max value and min value difference is %.2f",difference);

  return 0;
}

double difference_value(double pt[], int size)
{
  double max,min;
  max = min = pt[0];

  for (int i = 0; i < size; i++)
  {
    if (pt[i] > max)
    {
      max = pt[i];
    }else
    {
      min = pt[i];
    }
    
  }

  return max - min;
  

}