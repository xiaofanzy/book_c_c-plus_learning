#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
  using namespace std;

  char charr[20];
  string str;

  cout << "Length of the string in charr before input " << strlen(charr) << endl;
  cout << "Length of the string in string before input :" << str.size() << endl;

  cout << "enter a line of text:" << endl;
  cin.getline(charr,20);

  cout << "entor another line of text:" << endl;
  getline(cin,str);

  cout << "Length of the string in charr after input " << strlen(charr) << endl;
  cout << "Length of the string in string after input :" << str.size() << endl;


  return 0;

}