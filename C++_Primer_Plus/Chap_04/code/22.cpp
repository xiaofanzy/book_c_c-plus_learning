#include <iostream>

struct inflactable
{
  char name[20];
  float vloume;
  int price;
};


int main(void)
{
  using namespace std;

  inflactable *ps = new inflactable;

  cout << "Enter the name :" << endl;
  cin.get(ps->name,20);
  cout << "Enter the volume:\n";
  cin >> (*ps).vloume;
  cout << "Enter the price" << endl;
  cin >> ps->price;

  cout << "name = " << ps->name << " volume = " << ps->vloume
  << " and price = " << ps->price << endl;

  delete ps;

  return 0;
}