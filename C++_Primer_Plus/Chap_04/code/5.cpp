#include <iostream>

using namespace std;

int main(void)
{
  const int SIZE  = 60;
  char name[SIZE];
  char dessert[SIZE];

  cout << "Enter your name: " << endl;
  //cin >> name;
  cin.get(name,SIZE).get();
  cout << "Enter your favorite food." << endl;
  cin.getline(dessert,SIZE);
  cout << "hello " << name << " i give some " << dessert << " for yuo.\n";

  return 0;
}