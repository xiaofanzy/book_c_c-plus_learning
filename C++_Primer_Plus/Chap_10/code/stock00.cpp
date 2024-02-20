#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co,long n,double pr)
{
  company = co;
  if(n < 0)
  {
    std::cout << "error!" << std::endl;
    shares = 0;
  }
  else
  {
    shares = n;
    share_val = pr;
    set_tot();
  }
  
}

void Stock::buy(long num,double price)
{
  if (num < 0)
  {
    std::cout << "error";
    shares = 0;
  }
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
  
}

void Stock::sell(long num,double price)
{
  if (num < 0)
  {
    std::cout << "error" << std::endl;
  }
  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val = price;
  set_tot();
}

void Stock::show()
{
  using std::cout;
  using std::endl;

  cout << company << " company has " << shares << " piao and total is " << total_val << endl; 
}


