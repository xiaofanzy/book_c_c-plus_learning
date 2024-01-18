#include <iostream>

using namespace std;

int main(void)
{
  int n;

  cout << "enter the number";

  cin >> n;

  if (n == 1 || n == 2)
  {
    cout << "choose";
  }
  else if (2 == n || 4 == n)
  {
    cout << "not choose" << endl;
  }

  
  
  

  return 0;
}