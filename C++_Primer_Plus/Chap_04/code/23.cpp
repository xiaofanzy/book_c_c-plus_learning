#include <iostream>
#include <cstring>

using namespace std;

char *getname(void);

int main(void)
{
  char *result;
  cout << "Please enter your first name" << endl;
  result = getname();
  cout << "first name = " << result << endl;
  delete [] result;
  cout << "try again:" << endl;
  result = getname();
  cout << "first name = " << result << endl;
  cout << "at " << (int *)result << endl;
  delete [] result;

  return 0;
}

char *getname(void)
{
  
  char tmp[80];
  // 使用get 会留一个回车
  cin >> tmp;
  char *pn = new char[strlen(tmp) + 1];
  strcpy(pn,tmp);
  return pn;
}