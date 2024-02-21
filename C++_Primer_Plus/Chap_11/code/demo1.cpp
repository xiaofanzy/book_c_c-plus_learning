#include <iostream>

using namespace std;

class num
{ 
private:
  int m;
public:
  num();
  num(int l);
  num operator=(int n);
  ~num();
};  

num::num()
{ 
  cout << "hello world" << endl;
}

num::num(int l)
{
  m = l;
  cout << "ddd" << endl;
}

num num::operator=(int n)
{
  num u;
  u.m = n;
  cout << "dddddd" << endl;
  return u;
}

num::~num()
{ 

}


int main(void)
{
  num a;
  a = 10;

  return 0;
}