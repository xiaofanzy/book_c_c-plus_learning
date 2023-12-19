#include <stdio.h>

#include "pel2-2a.h"

static double  fuel;
static int km;
static int  states;

void set_mode(int m)
{
  states = m;
}

void get_info(void)
{
  printf("Enter distinct traveled in kilometer:");
  scanf("%d",&km);

  printf("Enter fuel consumed in leters:");
  scanf("%lf",&fuel);
}

void show_info(void)
{
  double per;
  per = (double)fuel / km * 100;

  printf("Fuel consumption is %.2f letters per 100km.\n",per);
}

