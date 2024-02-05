#include <iostream>

using namespace std;

int main(void)
{
  int rats = 10;
  int &rodents = rats;

  cout << rats << ":" << &rats << endl;
  cout << rodents << " " << &rodents << endl;
  rodents++;
  cout << rats << ":" << &rats << endl;
  cout << rodents << " " << &rodents << endl;

  int bunnies = 100;
  rodents = bunnies;  // 赋值语句而非将rodentes 指向 bunnies
  cout << rodents << ":" << &rodents << endl;
  cout << bunnies << ":" << &bunnies << endl;

  return 0;
}