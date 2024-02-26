#include "brass.h"

Brass::Brass(const string &s,long an,double bal)
{
  fullname = s;
  acctNum = an;
  balance = bal;
}

void Brass::Deposit(double amt)
{
  if (amt < 0)
  {
    cout << " the dollar is error" << endl;
  }
  else
  {
    balance += amt;
  }
  
}

void Brass::Withdraw(double amt)
{
  if (amt < 0)
  {
    cout << "Can't withdraw error dollar" << endl;
  }
  else
  {
    balance -= amt;
  }
  
}

double Brass::Balance() const
{
  return balance;
}

