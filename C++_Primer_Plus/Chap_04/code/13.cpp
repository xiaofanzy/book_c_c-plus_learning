#include <iostream>

struct inflactable
{
  std::string name;
  float volume;
  double price;
};


int main(void)
{
  using namespace std;

  inflactable guests[2] = 
  {
    {"Bambi", 0.5, 21.990},
    {"Godzilla", 2000, 565.99}
  };

  cout << "The guests " << guests[0].name << " and " << guests[1].name <<
    " have a cobined vloume of " << guests[0].volume + guests[1].volume << " cubic feet.\n";

  return 0;
}