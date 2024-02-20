#include "p4.h"
#include <iostream>

namespace SALES
{
  void setSales(Sales &s,const double ar[],int n)
  {
    double totals = 0.0;
    int i = 0;
    double min = ar[0];
    double max = ar[0];
    for (i = 0; i < n; i++)
    {
      s.sales[i] = ar[i];
      totals += ar[i];
      min = min < ar[i] ? min : ar[i];
      max = max > ar[i] ? max : ar[i];
    }
    
    s.average = totals / i;
    s.max = max;
    s.min = min;
  }

  void setSales(Sales &s)
  {
    using std::cout;
    using std::cin;
    using std::endl;

    double totals = 0.0;
    double max,min;
    max = min = 0.0;
    cout << "enter the sales:";
    for (int i = 0; i < QUARTERS; i++)
    {
      cin >> s.sales[i];
      cout << "enter the next value:";
      totals += s.sales[i];
      min = min < s.sales[i] ? min : s.sales[i];
      max = max > s.sales[i] ? max : s.sales[i];
    }

    s.average = (double)totals / QUARTERS;

    s.max = max;
    s.min = min;
    
  }

  void showSales(const Sales &s)
  {
    using std::cout;
    using std::endl;

    for (int i = 0; i < QUARTERS; i++)
    {
      cout << "sales"<< i << " is " << s.sales[i] << " ";
    }
    cout << endl;

    cout << "the sales average = " << s.average <<
      " and the max = " << s.max << " and the min = " << s.min
      << endl;

  }
}

