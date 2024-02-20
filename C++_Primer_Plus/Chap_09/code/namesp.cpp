#include "namesp.h"
#include <iostream>

namespace pers 
{
  using std::cin;
  using std::cout;
  using std::endl;
  void setName(Person &rp)
  {
    cout << "enter the first name :";
    cin >> rp.fname;
    cout << "Enter the last name: ";
    cin >> rp.lname;
  }

  void show(const Person &p)
  {
    cout << p.fname << " " << p.lname << endl;
  }
};

namespace debts 
{
  using std::cin;
  using std::cout;
  using std::endl;

  void getDebts(Debt &de)
  {
    show(de.name);
    cout << "Enter the debts :";
    cin >> de.price;
  };

  void showDebts(const Debt &de)
  {
    cout << de.name.fname << " " <<  de.name.lname << " has " << de.price << " debts." << endl;
  };

  double sumDebts(const Debt *d,int n)
  {
    double total = 0.0;
    for (int i = 0; i < n; i++)
    {
      total += d[i].price;
    }
    return total;
  }
}