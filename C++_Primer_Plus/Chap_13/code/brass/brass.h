#ifndef __BRASS_H__
#define __BRASS_H__

#include <iostream>
#include <string>

using namespace std;

class Brass
{
private:
  string fullname;
  long acctNum;
  double balance;
public:
  Brass(const string &s = "Nullbody",long an = -1,double bal = 0.0);
  void Deposit(double amt);
  virtual void Withdraw(double amt);
  double Balance() const;
  virtual void ViewAcct() const;
  virtual ~Brass();
};

class BrassPlus : public Brass
{
private:
  double maxLoan;
  double rate;
  double owesBank;
public:
  BrassPlus(const string &s = "Nullbody",long an = -1,double bal = 0.0,double ml = 500.0,double r = 0.11125);
  BrassPlus(const Brass &bs,double ml = 500.0,double r = 0.11125);
  virtual void ViewAcct() const;
  virtual void Withdraw(double amt);
  void ResetMax(double m){maxLoan = m;}
  void ResetRate(double r){rate = r;}
  void RestOwes(){owesBank = 0.0;}
};


#endif