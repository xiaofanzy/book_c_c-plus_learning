#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string name;
  string dessert;

  cout << "Enter your name: " << endl;
  //cin >> name;
  getline(cin,name);
  cout << "Enter your favorite food." << endl;
  getline(cin,dessert);
  cout << "hello " << name << " i give some " << dessert << " for yuo.\n";

  return 0;
}