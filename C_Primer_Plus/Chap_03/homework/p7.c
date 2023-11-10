#include <stdio.h>

int main(void)
{
  float inches;
  printf("please enter your height in inches:");
  scanf("%f",&inches);

  printf("Your height in cm is %f\n", inches * 2.54);

  return 0;
}