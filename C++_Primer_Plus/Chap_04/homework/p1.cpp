#include <iostream>
#include <string>
#include <cstring>


struct personinfos
{
  char firstname[20];
  std::string lastname;
  char grade;
  int age;
};


int main(void)
{
  using namespace std;

  personinfos Betty;
  cout << "What is your first name?";
  cin.get(Betty.firstname,20);

  cout << "what is your last name?";
  cin >> Betty.lastname;

  cout << "What letter grade do you deserve?";
  cin >> Betty.grade;

  cout << "What is your age?";
  cin >> Betty.age;

  cout << "Name : " << Betty.lastname << " " << Betty.firstname << endl;
  cout << "Grade: " << char(Betty.grade + 1) << endl;
  cout << "Age : " << Betty.age << endl;


  return 0;
}