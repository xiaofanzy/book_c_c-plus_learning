#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool test_maxValue(int m);

int main(void)
{
  int max_value = INT_MAX;
  bool is_max =false;

  is_max = test_maxValue(max_value);

  printf("The max value is %d.\n",max_value);
  printf(" Is %s",is_max ? "True":"False");

  return 0;
}

bool test_maxValue(int m)
{
  return m >= INT_MAX ?  true : false;

}

