#include <iostream>

using namespace std;

const int ARSIZE = 60;
char *left(char *pt,int size = 1);
int main(void)
{
  char pt[ARSIZE];
  cout << "enter the string:";
  cin.get(pt,ARSIZE);

  char *ps = left(pt,4);
  cout << ps << endl;
  delete []ps;

  ps = left(pt);
  cout << ps << endl;
  delete []ps;

  return 0;
}

char *left(char *pt,int size)
{
  int m = 0;
  while (m < size && pt[m])
  {
    m++;
  }

  char *result = new char[m + 1];
  int i = 0;
  for(i = 0;i < m && pt[i]; i++)
  {
    result[i] = pt[i];
  }
  result[m] = '\0';
  return result;
}