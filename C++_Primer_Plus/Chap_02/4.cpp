#include <iostream>

int main(void)
{
  using namespace std;

  int carrots;

  cout << "How many carrots do you have?" << endl;
  cin >> carrots;
  carrots = carrots + 2;
  cout << "Now you have " << carrots << " carrots." << endl;

  return 0;
}