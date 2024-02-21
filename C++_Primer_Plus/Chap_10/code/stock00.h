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
  void acquire(const std::string &co,long n, double pr);
  void buy(long num,double price);
  void sell(long num,double price);
  void update(double price);
  void show();
  const std::string &s_company() const{return company;};
  long s_shares()const {return shares;};
  double s_share_val() const {return share_val;};
  double s_total_val() const {return total_val;};
};




#endif