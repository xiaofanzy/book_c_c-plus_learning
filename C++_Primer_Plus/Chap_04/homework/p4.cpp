#include <iostream>
#include <string>

int main(void)
{
  using namespace std;
  string first_name,last_name;

  cout << "Enter your first name:";
  getline(cin,first_name);
  cout << "Enter your last name:";
  getline(cin,last_name);
  first_name = first_name + "," + last_name;

  cout << "Here's the information in a single string : " << first_name << endl;


  return 0;
}