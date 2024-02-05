#include <iostream>
#include <string>

using namespace std;
string version1(const string &input,const string &str);
string &version2(string &s1,const string &str);
string &version3(string &s1,const string &str);
string &version4(const string &s1,const string &str);

int main(void)
{
  string input;
  string copy;
  string result;

  cout << "Enter the string value :";
  getline(cin,input);

  copy = input;

  result = version1(input,"***");
  cout << result << endl;
  result = version2(input,"!!!");
  cout << result << endl;
  result = version3(input,"@@@");
  cout << result << endl;
  result = version4(input,"...");
  cout << result << endl;


  return 0;
}

string version1(const string &input,const string &str)
{
  string re = str + input + str;
  return re;
}

string &version2(string &s1,const string &str)
{
  s1 = str + s1 + str;
  return s1;
}

string &version3(string &s1,const string &str)
{
  string *pt;
  *pt = str + s1 + str;
  return *pt;
}

string &version4(const string &s1,const string &str)
{
  string temp;
  temp = str + s1 + str;
  return temp;
}
