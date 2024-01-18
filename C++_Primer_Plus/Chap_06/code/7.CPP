#include <iostream>
#include <climits>

using namespace std;
bool is_int(double n);

int main(void)
{
  double number;

  cout << "enter the num:";
  cin >> number;

  while (!is_int(number))
  {
    cout << "Out of range,please enter again:";
    cin >> number;
  }

  cout << "You enter is " << (int)number << endl;
  
  return 0;
}

bool is_int(double n)
{
  return n < INT_MAX && n > INT_MIN;
}