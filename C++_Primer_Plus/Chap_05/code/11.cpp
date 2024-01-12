#include <iostream>

int main(void)
{
  using namespace std;

  int  arr[10] = {20,20,20,20,20,12,1,1,1,1};

  cout << "Doing it right" << endl;

  for(int i = 0; arr[i] == 20;i++)
    cout << "arr" << i << " is a 20." << endl;

  return 0;
}