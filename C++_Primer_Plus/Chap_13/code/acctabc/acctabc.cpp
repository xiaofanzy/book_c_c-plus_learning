#include "acctabc.h"

AcctABC::AcctABC(const string &s,long an,double bal)
{
  fullname = s;
  acctNum = an;
  balance = bal;
}

void AcctABC::Deposit(double amt)
{
  if (amt < 0)
  {
    cout << "error" << endl;
  }
  else
  {
    balance += amt;
  }
}

void AcctABC::Withdraw(double amt)
{
  balance -= amt;
}


void Brass::Withdraw(double amt)
{
  if (amt < 0)
  {
    cout << "must be positive." << endl;
  }
  else if (amt <= Balance())
  {
    AcctABC::Withdraw(amt);
  }
  else
  {
    cout << "exceeded your balance." << endl;
  }
}

void Brass::ViewAcct() const
{
  cout << FullName() << " " << AcctNum() << " " << Balance() << endl;
}

BrassPlus::BrassPlus(const string &s,long an,double bal,double ml,double r) : AcctABC(s,an,bal)
{
  maxLoan = ml;
  rate = r;
  owesBank = 0.0;
}

BrassPlus::BrassPlus(const AcctABC &ac,double ml,double r) : AcctABC(ac)
{
  maxLoan = ml;
  rate = r;
  owesBank = 0.0;
}

void BrassPlus::ViewAcct() const 
{
  cout << FullName() << " " << AcctNum() << " " << Balance() << endl;
  cout << maxLoan << " " << rate << " " << owesBank << endl;
}

void BrassPlus::Withdraw(double amt)
{
  double bal = Balance();
	if (amt < bal)
  {
    AcctABC::Withdraw(amt);
  }
  else if (amt <= bal + maxLoan - owesBank)
  {
    double advance = amt - bal;
    owesBank = advance * (1.0 + rate);
    cout << "Bank Advance : $" << advance << endl;
    cout << "Finance charge : $" << advance * rate << endl;
    Deposit(advance);
    AcctABC::Withdraw(amt);
  }
  else
  {
    cout << "Credit limit exceeded! " << endl;
  }
  
  
}