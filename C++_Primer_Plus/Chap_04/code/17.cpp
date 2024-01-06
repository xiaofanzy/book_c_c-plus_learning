#include <iostream>

int main(void)
{
  using namespace std;

  int a = 4;
  double b = 8;

  int *pt = new int;
  double *pd = new double;

  pt = &a;
  pd = &b;

  cout << "a value = " << a << " location = " << pt << endl;
  cout << "b value = " << b << " location = " << pd << endl;

  cout << "location of pointer pd = " << &pd << endl;

  cout << "size of pt " << sizeof(pt) << endl;
  cout << "size of *pt " << sizeof(*pt) << endl;
  cout << "size of pd " << sizeof(pd) << endl;
  cout << "size of *pd " << sizeof(*pd) << endl;

  delete pt;
  delete pd;


  return 0;
}