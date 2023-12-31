#include <iostream>

int main(void)
{
  using namespace std;

  const int cm_per_cun = 2.54;
  int height;
  cout << "Enter your height:";
  cin >> height;

  int inches = height / cm_per_cun;
  int left_height = height % cm_per_cun;

  int feet = int(inches / 10);
  inches = inches % 10;

  cout << height << "cm = " << feet << " feet and " << inches << " inches and " << left_height << " cm." << endl;







  return 0;
}