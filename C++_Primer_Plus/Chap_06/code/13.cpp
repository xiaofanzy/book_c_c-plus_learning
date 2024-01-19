#include <iostream>

using namespace std;

int main(void)
{
  int num1,num2;

  cout << "enter the first num:";
  cin >> num1;

  cin.clear();
  while (cin.get()!='\n')
  {
    continue;
  }
  

  cout << "Enter the second num:";
  cin >> num2;

  cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

  return 0;
}