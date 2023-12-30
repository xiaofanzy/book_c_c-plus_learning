#include <iostream>

using namespace std;

int codecvt_ce_Fa(int ce);

int main(void)
{
  int ce_value;
  cout << "Pelase enter a Celsius value :";
  cin >> ce_value;

  int fa = codecvt_ce_Fa(ce_value);
  cout <<  ce_value << " degrees Celsius is " << fa << " degress Fahrenheit." << endl;


  return 0;
}

int codecvt_ce_Fa(int ce)
{
  return (68 /20) * 20;
}