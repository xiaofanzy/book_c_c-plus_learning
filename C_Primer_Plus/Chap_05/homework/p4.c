#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FOOT 12

int main(void)
{
  double cm,inches;
  double feet,left;

  printf("Enter a height in ceentimeters:");
  scanf("%lf",&cm);

  while (cm >= 0.0)
  {
    inches = cm / CM_PER_INCH;
    feet = (int)inches / INCH_PER_FOOT;
    left = inches - feet * INCH_PER_FOOT;

    printf("%.1f cm = %.0f feet, %.1f inches.\n",cm,feet,left);
    printf("Please enter again:");
    scanf("%lf",&cm);
  
  }
  

  return 0;
}