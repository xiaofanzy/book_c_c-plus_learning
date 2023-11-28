#include <stdio.h>
#define RATE_1 360
#define RATE_2 680
#define BREAK1 0.12589
#define BREAK2 0.17901
#define BREAK3 0.20971
#define BASE1 (BREAK1 * RATE_1)
#define BASE2 (BREAK1 * RATE_1 + BREAK2 * (RATE_2 - RATE_1))

int main(void)
{
  double kwh;
  double bill;

  printf("Please enter the kws used.\n");

  while ((scanf("%f",&kwh)) == 1 )
  {
    if (kwh < RATE_1)
    {
      bill = BASE1;
    }
    else if (kwh < RATE_2)
    {
      bill = BASE1 + BREAK2 * (kwh - RATE_1);
    }
    else 
    {
      bill = BASE2 + (kwh - RATE_2) * BREAK3;
    }
    
    printf("You must const %.2f money for Electric.\n", bill);

    printf("Please enter the next value.\n");
  }
  

  return 0;
}