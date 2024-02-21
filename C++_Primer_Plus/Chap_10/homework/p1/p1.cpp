#include <iostream>
#include "p1.h"
#include <cstring>

Bank::Bank(){}

Bank::Bank(const char _name[SIZE],const char _account[SIZE],double _money)
{
  this->money = _money;
  strcpy(this->name,_name);
  strcpy(this->account,_account);
}

void Bank::show(Bank &bank) const
{
  std::cout << "the " << bank.name << " ." << bank.account << " has " << bank.money << " dollars." << std::endl;
}

void Bank::addMoney(double money) 
{
  this->money += money;
}

void Bank::subMoney(double money)
{
  this->money -= money;
}

Bank::~Bank()
{}