#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool test_maxValue(int m,int max_value);

int main(void)
{
  int max_value = INT_MAX;
  bool is_max =false;

  is_max = test_maxValue(max_value,INT_MAX);

  printf("The max value is %d.\n",max_value);
  printf(" Is %s",is_max ? "True":"False");

  return 0;
}

bool test_maxValue(int m,int max_value)
{
  bool flag = false;
  flag = m + 1 > max_value ?  true : false;

  return false;

}

