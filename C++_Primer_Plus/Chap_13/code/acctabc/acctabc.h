#ifndef __ACCTABC_H__
#define __ACCTABC_H__

#include <iostream>
#include <string>

using namespace std;

class AcctABC
{
private:
  string fullname;
  long acctNum;
  double balance;
protected:
  const string &FullName() const{return fullname;}
  long AcctNum() const{return acctNum;}
public:
  AcctABC(const string &s = "Nobody",long an = -1,double bal = 0.0);
  void Deposit(double amt);
  virtual void Withdraw(double amt) = 0;
  double Balance() const {return balance;}
  virtual void ViewAcct() const = 0;
  virtual ~AcctABC(){};
};

class Brass : public AcctABC
{
public:
  Brass(const string &s = "Nullbody",long an = -1,double bal = 0.0) :AcctABC(s,an,bal){};
  virtual void Withdraw(double amt);
  virtual void ViewAcct() const;
  virtual ~Brass(){};
};

class BrassPlus : public AcctABC
{
private:
  double maxLoan;
  double rate;
  double owesBank;
public:
  BrassPlus(const string &s = "Nullbody",long an = -1,double bal = 0.0,double ml = 500.0,double r = 0.00125);
  BrassPlus(const AcctABC &ac,double ml = 500.0,double r = 0.00125);
  virtual void ViewAcct() const;
  virtual void Withdraw(double amt);
  void ResetMax(double m){maxLoan = m;}
  void ResetRate(double r){rate = r;}
  void ResetOwes(){owesBank = 0.0;}
  virtual ~BrassPlus(){};
};




#endif