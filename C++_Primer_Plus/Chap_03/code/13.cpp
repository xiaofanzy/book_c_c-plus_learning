#include <iostream>

int main(void)
{
  using namespace std;

  cout.setf(ios_base::fixed, ios_base::floatfield);

  int tree = 3;
  int guess(3);
  int debt = 1.e7*20;

  cout << "tree = " << tree << endl;
  cout << "guess = " << guess << endl;
  cout << "debt = " << debt << endl;
  

  return 0;
}