#include <stdio.h>

int main(void)
{
  long num;
  long sum = 0;
  int status;

  printf("Please enter an integer to be summed:");
  printf("q to quit.\n");

  status = scanf("%ld",&num);

  while (status == 1)
  {
    sum = sum + num;

    printf("Please enter again:\n");

    status = scanf("%ld",&num);
  }
  
  printf("Those total is %ld", &sum);

  return 0;
}