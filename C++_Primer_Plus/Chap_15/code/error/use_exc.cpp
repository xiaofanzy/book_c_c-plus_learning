#include "exc_mean.h"
#include <cstdlib>
#include <cmath>

double Hmean(double a,double b);
double Gmean(double a,double b);

int main(void)
{
  double x,y,z;

  while (cin >> x >> y)
  {
    try
    {
      z = Hmean(x,y);
      z = Gmean(x,y);
    }
    catch(const gmean &sh)
    {
      sh.GShow();
      continue;
    }
    catch(const hmean &hm)
    {
      hm.HShow();
      break;
    }
    cout << "another two arguements.\n";
  }
  

  return 0;
}

double Hmean(double a,double b)
{
  if (a == -b)
  {
    throw hmean(a,b);
  }
  return (a + b) / (a - b);
}

double Gmean(double a,double b)
{
  if(a < 0 || b < 0)
  {
    throw gmean(a,b);
  }
  return sqrt(a*b);
}

double mean(double a,double b)
{
  double ab,bc;
  try
  {
    ab = Hmean(a,b);
    bc = Gmean(a,b);
  }
  catch(const gmean &hm)
  {
    hm.GShow();
    cout << " 1. error" << endl;
    throw;
  }
  return ab + bc;
}