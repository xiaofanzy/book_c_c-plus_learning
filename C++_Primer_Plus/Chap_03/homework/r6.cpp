#include <iostream>

using namespace std;

int main(void)
{

  double distince_in_miles,fule_in_gallon,fuel_consume;

  cout << "Enter the distince in miles:";
  cin >> distince_in_miles;
  cout << "Enter the fuel consume in gallon:";
  cin >> fule_in_gallon;

  fuel_consume = distince_in_miles / fule_in_gallon;
  cout << "fuel = " << fuel_consume << endl;


  return 0;
}