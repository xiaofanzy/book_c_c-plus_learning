#include "stringbad.h"

void callStr1(const StringBad &s);
void callStr2(const StringBad c);
int main(void)
{
  StringBad st1;
  StringBad st2("hello world");

  cout << st1;
  cout << st2;

  cout << "---------------------" << endl;
  callStr1(st2);
  // 复制构造函数
  callStr2(st2);

  return 0;
}

void callStr1(const StringBad &s)
{
  cout << s << endl;
}

void callStr2(const StringBad c)
{
  cout << c << endl;
}