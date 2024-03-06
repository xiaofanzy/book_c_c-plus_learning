#include <iostream>
#include <cstdlib>

using namespace std;
double hmean(double x,double b);
int main(void)
{
  double x,y,z;

  while (cin >> x >> y)
  {
    try
    {
      z = hmean(x,y);
    }
    catch(const char *s)
    {
      cout << s << endl;
      cout << "Enter a new pair of arguments:";
      continue;
    }
    
    cout << "Harmonic mean of " << x << "  and " << y << " is " << z << endl;
    cout << "Enter another two arguement." << endl;
  }
  
}

double hmean(double x,double b)
{
  if (x == -b)
  {
    cout << "ban hmean() arguements  a = -b not allowed.\n";
  }
  
  return (x + b) / x -b;
}