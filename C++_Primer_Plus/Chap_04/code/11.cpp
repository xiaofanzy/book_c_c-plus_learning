#include <iostream>

struct inflactable
{
  char name[20];
  float volume;
  double price;
};


int main(void)
{
  using namespace std;

  inflactable guest = {
    "Glorious Gloria",
    1.88,
    29.99
  };

  inflactable pal = {
    "Audacious Arthur",
    3.12,
    32.99
  };

  cout << "Expand your guest list with " << guest.name << " and " << pal.name << endl;
  cout << "You can hava both for $" << guest.price + pal.price << "!" << endl;



  return 0;

}