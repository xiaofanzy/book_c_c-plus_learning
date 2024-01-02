#include <iostream>
#include <string>

int main(void)
{
  using namespace std;
  char chr1[80];
  char chr2[80] = "tiger";
  string str1;
  string str2 = "Orange";

  cin >> chr1;
  cin >> str1;

  cout << "Those element for those:";
  cout << chr1 << " " << chr2 << " " << str1 << " " << str2 << " " << endl;
  cout << "The three for " << chr2 << " is " << chr2[3] << endl;
  cout << " the three for " << str2 << " is " << str2[2] << endl;


  return 0;
}