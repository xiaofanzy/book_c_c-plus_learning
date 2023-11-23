#include <stdio.h>

void Temperatures(double fa);
double getCels(double fa,const double Ce_First,const double Ce_last);
double getKelv(double ce,const double Ce_Ke);

int main(void)
{
  double fahrenheit;

  printf("Please enter the Fahrenheit value:");

  while (scanf("%lf",&fahrenheit) != 0 )
  {
    Temperatures(fahrenheit);

    printf("please enter again:\n");
  }
  



  return 0;
}

void Temperatures(double fa)
{
  double Ce,Ke;

  const double Ce_First = 1.8;
  const double Ce_last = 32.0;
  const double Ce_Ke = 273.16;

  Ce = getCels(fa,Ce_First,Ce_last);

  Ke = getKelv(Ce,Ce_Ke);

  printf("The %.2f Fahrenheit is equals %.2f Celsius and %.2f Kelvin.\n", fa,Ce,Ke);

}

double getCels(double fa,const double Ce_First,const double Ce_last)
{
  return Ce_First * fa + Ce_last;
}

double getKelv(double ce,const double Ce_Ke)
{
  return ce + Ce_Ke;
}