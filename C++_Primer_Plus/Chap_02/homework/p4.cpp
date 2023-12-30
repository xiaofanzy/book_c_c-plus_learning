#include <iostream>

using namespace std;
int convert_year_to_mounth(int a);

int main(void)
{
  int age;
  cout << "Enter your age:";
  cin >> age;
  int mounth = convert_year_to_mounth(age);
  cout << "The " << age << " is equals " << mounth << " mounthes." << endl;

  return 0;
}

int convert_year_to_mounth(int a)
{
  return 12 * a;
}