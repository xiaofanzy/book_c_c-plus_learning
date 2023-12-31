#include <iostream>

using namespace std;

int main(void)
{
  double num1,num2;

  cout.setf(ios_base::fixed,ios_base::floatfield);

  cout << "Enter two number:";
  cin >> num1;
  cout << "Enter another number:";
  cin >> num2;

  cout << " num1 + num2 = " << num1 + num2 << endl;
  cout << " num1 - num2 = " << num1 - num2 << endl;
  cout << " num1 * num2 = " << num1 * num2 << endl;
  cout << " num1 / num2 = " << num1 / num2 << endl;



  return 0;
}