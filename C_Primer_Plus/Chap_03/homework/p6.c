#include <stdio.h>

int main(void)
{

  float katuo;

  printf("Please enter the katuo numbers:");
  scanf("%f", &katuo);
  printf("%f", katuo);

  printf("Your %f is %le water small",katuo, katuo * 3.0e23);

  return 0;
}