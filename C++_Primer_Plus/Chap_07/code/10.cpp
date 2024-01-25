#include <iostream>

using namespace std;
char * buildstr(char ch,int n);

int main(void)
{

  char ch;
  int times;

  cout << "Enter a character:";
  cin >> ch;
  cout << "Enter times:";
  cin >> times;

  char *ps = buildstr(ch,times);
  cout << ps << endl;

  delete [] ps;

  return 0;
}

char * buildstr(char ch,int n)
{
  char *pstr = new char[n + 1];
  pstr[n] = '\n';
  for (int i = 0; i < n; i++)
  {
    pstr[i] = ch;
  }
  return pstr;
}