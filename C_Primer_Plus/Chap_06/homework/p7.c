#include <stdio.h>

double getResult(double f,double s);

int main(void)
{
  double last_num,first_num,result;

  printf("please enter the two numbers:");

  while (scanf("%lf%lf",&first_num,&last_num) == 2)
  {
    result = getResult(first_num,last_num);
    printf("%.2f\n",result);
    printf("Please enter again.\n");
  }

  printf("Bye!");
  

  return 0;
}

double getResult(double f,double s)
{
  return (f -s) / (f * s);
}