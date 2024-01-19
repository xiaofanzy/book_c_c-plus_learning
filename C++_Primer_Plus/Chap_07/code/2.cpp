#include <iostream>

using namespace std;
double cube(double n);
void cheers(int n);
int main(void)
{

  cheers(5);

  int number;
  cout << "Enter the number:";
  cin >> number;

  double value = cube(number);
  cout << number << " cube is " << value << endl;
  cheers(cube(2));

  return 0;
}

void cheers(int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Cheers \t";
  }
  cout << endl;
  
}

double cube(double n)
{
  return n * n * n;
}