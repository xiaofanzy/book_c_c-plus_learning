#include <iostream>

int main(void)
{
  using namespace std;

  double wages[3] = {1000.0,2000.0,3000.0};
  short stacks[3] = {3,2,1};

  double *pw = wages;
  short *ps = &stacks[0];

  cout << "pw = " << pw << " *pw = " << *pw << endl;
  pw = pw + 1;
  cout << "add 1 to the pw pointer.\n";
  cout << "pw = " << pw << " *pw = " << *pw << endl;
  cout << "ps = " << ps << "*ps = " << *ps << endl;



  return 0;
}