#include <iostream>

void simon(int n);

int main(void)
{
  using namespace std;

  simon(3);

  int n;
  cin >> n;
  simon(n);
  cout << "Done." << endl;
  
  return 0;
}

void simon(int n)
{
  using namespace std;

  cout << "Simon sava touch your toes " << n << " times. " << endl;
}