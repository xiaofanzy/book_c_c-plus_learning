#include <stdio.h>

#define SIZE 5

void show_array(const double d[],int n);
void mult_array(double d[],int n, double mult);

int main(void)
{
  double dip[SIZE] = {1.1,2.2,3.3,4.4,5.5};

  show_array(dip,SIZE);
  mult_array(dip,SIZE,2.5);
  show_array(dip,SIZE);

  return 0;
}

void show_array(const double d[],int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%8.3f", d[i]);
  }
  printf("\n");
  
}

void mult_array(double d[],int n, double mult)
{
  for (int i = 0; i < n; i++)
  {
    d[i] *= mult;
  }
  

}