#include <iostream>

using namespace std;
int convert_light(double n);

int main(void)
{
  double num;
  cout << "enter the number of light years:";
  cin >> num;

  int astron = convert_light(num);

  cout << num << " lights years = " << astron << " astronomical units." << endl;

  return 0;
}

int convert_light(double n)
{
  return 63240 * n;
}
