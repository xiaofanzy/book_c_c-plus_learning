#include <iostream>
#include <string>

using namespace std;
void strcount(string str);

int main(void)
{
  string input;

  cout << "enter the line " << endl;
  getline(cin,input);

  while (input != "")
  {
    strcount(input);
    cout << "enter the line " << endl;
    getline(cin,input);
  }

  return 0;
}

void strcount(string str)
{
  static int total = 0;
  int count = 0;

  count += str.size();
  total += count;
  cout << "total = " << total << " and count = " << count << endl;
}