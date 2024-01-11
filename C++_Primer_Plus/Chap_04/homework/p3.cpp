#include <iostream>
#include <cstring>

int main(void)
{
  using namespace std;

  char first_name[80];
  char last_name[80];

  cout << "Enter your first name:";
  cin.getline(first_name,80);
  /* while (getchar() != '\n')
  {
    continue;
  } */
  
  cout << "Enter your last name:";
  cin.get(last_name,80);
  strcat(first_name,",");
  strcat(first_name,last_name);

  cout << "Here's the information in a single string : " << first_name << endl;

  return 0;
}