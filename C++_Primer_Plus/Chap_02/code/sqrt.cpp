#include <iostream>
#include <cmath>

int main(void)
{
  using namespace std;

  double area;
  cout << "Enter the floor area,in square feet,or your home:";
  cin >> area;

  double side;
  side = sqrt(area);
  cout << "That's the equivalent of the square" << side << 
  " feet to the side." << endl;
  cout << "How fascinating " << endl;


  return 0;
}