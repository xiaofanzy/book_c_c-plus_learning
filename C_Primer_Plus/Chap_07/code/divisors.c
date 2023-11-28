#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  unsigned long num;
  unsigned long div;
  bool isPrime;

  printf("Please enter an integer for analysis.\n");
  printf("enter the q to quit.\n");

  while (scanf("%lu", &num) == 1)
  {
    for(div = 2,isPrime = true;(div * div) <= num;div++)
    {
      if (num % div == 0)
      {
        if ((div * div) != num)
        {
          printf(" %lu is divisible by %lu and %lu",num,div, num / div);
        }
        else
        {
          printf("%lu is divisible by %lu .\n", div,num / div);
        }
        isPrime = false;
      }
    }
    if (isPrime) 
    {
      printf("%lu is prime.\n", num);
    }

    printf("enter another.\n");
    
    
  }
  printf("Bye.\n");
  return 0;
}