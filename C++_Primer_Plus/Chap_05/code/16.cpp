#include <iostream>

int main(void)
{
  using namespace std;

  cout << "Enter the number you favoriate?";
  int number;

  do
  {
    cin >> number;
  } while (number != 7);
  
  cout << "you are clever" << endl;

  return 0;
}