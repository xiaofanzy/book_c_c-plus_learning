#include <iostream>
#include <string>

struct cars {
  std::string car_name;
  int year;
};

int main(void) {
  using namespace std;

  int catalog;

  cout << "How many cars do you wish to catalog?";
  cin >> catalog;

  while (cin.get() != '\n')
  {
    continue;
  }
  

  cars* car = new cars[catalog];

  for (int i = 0; i < catalog; i++) {
    cout << "Car #" << i + 1 << ":" << endl;
    cout << "Please enter the make:";
    getline(cin, (car + i)->car_name);
    cout << "Please enter the year made:";
    cin >> (car + i)->year;
    cin.ignore();
  }

  cout << "Here is your collection:" << endl;
  for (int i = 0; i < catalog; i++) {
    cout << car[i].year << " " << car[i].car_name << endl;
  }

  delete[] car;

  return 0;
}
