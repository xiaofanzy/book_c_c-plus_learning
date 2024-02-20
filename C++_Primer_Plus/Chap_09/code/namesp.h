#include <iostream>
#include <string>
namespace pers
{
  struct Person
  {
    std::string fname;
    std::string lname;
  };

  void setName(Person &rp);
  void show(const Person &p);
  
};

namespace debts
{
  using namespace pers;

  struct Debt
  {
    Person name;
    double price;
  };
  
  void getDebts(Debt &de);
  void showDebts(const Debt &de);
  double sumDebts(const Debt *d,int n);
} 

