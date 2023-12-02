#include <stdio.h>

void add_to(double pr[],int n, double m);

int main(void)
{
  double price[] = {1.1,2.2};

  add_to(price,2,2.5);

  for (int i = 0; i < 2; i++)
  {
    printf("%.2f,",price[i]);
  }
  
}

void add_to(double pr[],int n, double m)
{
  for (int i = 0; i < n; i++)
  {
    pr[i] += m;
  }
  
}