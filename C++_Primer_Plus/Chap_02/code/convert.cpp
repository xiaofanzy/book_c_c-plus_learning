#include <iostream>

int stonetolb(int n);

int main(void)
{
  using namespace std;

  int stone;
  cout << "Enter the weight in stone:";
  cin >> stone;
  int pounds = stonetolb(stone);
  cout << stone << " stone = " << pounds << " pounds." << endl;

  return 0;
}

int stonetolb(int n)
{
  return n * 14;
}