#include <iostream>
#include <cstring>
int main(void)
{
  using namespace std;

  int year;
  char address[80];

  cout << "puts your year:";
  (cin >> year).get();

  cout << "puts your address:";
  cin.getline(address,80);

  cout << "The year " << year << " your live in " << address << "." << endl;

  return 0;
}