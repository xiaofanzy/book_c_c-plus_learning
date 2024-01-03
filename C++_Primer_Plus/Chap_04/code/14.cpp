#include <iostream>

using namespace std;

union one2All
{
  char ch;
  int n;
};


int main(void)
{
  cout << "size of one2All = " << sizeof(one2All) << " bytes." << endl;
  one2All a;
  a.ch = 'A';
  cout << "A.CH = " << a.ch << " and a.n = " << a.n << "." << endl;


  return 0;
}