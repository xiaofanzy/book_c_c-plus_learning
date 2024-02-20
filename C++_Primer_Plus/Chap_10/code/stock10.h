#ifndef __STOCK00_H__
#define __STOCK00_H__
#include <iostream>
#include <string>

class Stock
{
private:
  std::string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot(){total_val = share_val * shares;};
public:
  Stock();
  Stock(const std::string &co = "error",long n = 0, double pr = 0.0);
  void buy(long num,double price);
  void sell(long num,double price);
  void update(double price);
  void show() const;
  ~Stock();
};




#endif