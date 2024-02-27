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
  else if (amt <= balance)
  {
    balance -= amt;
  }
  else
  {
    cout << "Withdraw amount exceeded your balance!" << endl;
  }
  
}

double Brass::Balance() const
{
  return balance;
}

void Brass::ViewAcct() const 
{
  cout << fullname << " " << acctNum << " " << balance << endl;
  
}

Brass::~Brass()
{
  cout << " brass virtirl Brass is called" << endl;
}

BrassPlus::BrassPlus(const string &s,long an,double bal,double ml,double r)
: Brass(s,an,bal)
{
  maxLoan = ml;
  rate = r;
  owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &bs,double ml,double r) : Brass(bs)
{
  maxLoan = ml;
  rate = r;
  owesBank = 0.0;
}

void BrassPlus::ViewAcct() const
{
  Brass::ViewAcct();
  cout << "Maxium load : " << maxLoan << endl;
  cout << "Loan Rate :" << rate << endl;
  cout << "Owed to bank : $" << owesBank << endl; 
}

void BrassPlus::Withdraw(double amt)
{
  double bal = Balance();
  if (amt <= bal)
  {
    Brass::Withdraw(amt);
  }
  else if (amt <= bal + maxLoan - owesBank)
  {
    double advance = amt - bal;
    owesBank = advance * (1.0 + rate);
    cout << "Bank Advance : $" << advance << endl;
    cout << "Finance charge : $" << advance * rate << endl;
    Deposit(advance);
    Brass::Withdraw(amt);
  }
  else
  {
    cout << "Credit limit exceeded! " << endl;
  }
  
  
}

