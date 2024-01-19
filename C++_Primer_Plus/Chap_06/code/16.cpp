#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(void)
{

  string automobile;
  int year;
  double a_price,d_price;

  ofstream outFile;
  outFile.open("car.txt");

  if (!outFile.is_open())
  {
    cout << "can't open file" << endl;
    exit(EXIT_FAILURE);
  }
  cout << "Open file success" << endl;
  

  cout << "Enter the make and model of automobile:";
  cin >> automobile;
  cout << "Enter the model year:";
  cin >> year;
  cout << "enter the origin asking price:";
  cin >> a_price;

  d_price = a_price * 0.913;

  cout << fixed;
  cout.precision(2);
  cout.setf(ios_base::showbase);
  cout << "Make and model:" << automobile << endl;
  cout << "Year:" << year << endl;
  cout << "Was asking:" << a_price << endl;

  outFile << fixed;
  outFile.precision(2);
  outFile.setf(ios_base::showbase);

  outFile << "Make and model:" << automobile << endl;
  outFile << "Year:" << year << endl;
  outFile << "Was asking:" << a_price << endl;

  return 0;
}