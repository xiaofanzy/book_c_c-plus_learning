#include <iostream>

int main(void)
{
  using namespace std;

  int number,sum = 0;

  for (int i = 0; i < 5; i++)
  {
    cout << "Enter the " << i+ 1 << " valus:";
    cin >> number;
    sum += number;
  }

  cout << "Five exquiste choice indeed:";
  cout << "sum = " <<sum << endl;
  
  return 0;
}