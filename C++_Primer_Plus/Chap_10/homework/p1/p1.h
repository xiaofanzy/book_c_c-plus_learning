#ifndef __P1_H__
#define __P1_H__

class Bank
{
private:
  enum {SIZE = 60};
  char name[SIZE];
  char account[SIZE];
  double money;
public:
  Bank();
  // 函数的申明放在这里，函数的实现放在外层；
  Bank(const char _name[SIZE] = "error",const char _account[SIZE] = "0000",double _money = 0.0);
  ~Bank();
  void show(Bank &bank) const;
  void addMoney(double money);
  void subMoney(double money);
};

#endif

