#include <iostream>

int main(void)
{
  using namespace std;
  int sum = 0,num;

  do
  {
    cout << "enter the num :";
    cin >> num;
    sum += num;
    cout << "The total = " << sum << endl;
  } while (num != 0);

  return 0;
}