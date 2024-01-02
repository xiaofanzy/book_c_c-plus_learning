#include <iostream>
#include <string>
#include <cstring>
int main(void)
{
  using namespace std;

  char char1[20];
  char char2[20] = "jaguar";
  string str1;
  string str2 = "panther";

  str1 = str2;
  strcpy(char1,char2);

  str1 += " patse";
  strcat(char1," juice");
  
  int len1 = str1.size();
  int len2 = strlen(char1);

  cout << "The " << str1 << " concat " << len1 << " bytes." << endl;
  cout << "The " << char2 << " concat " << len2 << " bytes." << endl;


  return 0;
}