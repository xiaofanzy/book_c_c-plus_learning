#include <iostream>

using namespace std;

int main(void)
{
  int cheat = 42;
  int waist = 0x42;
  int inseam = 042;

  cout << "cheat = " << cheat << " in dec." << endl;
  cout << hex;
  cout << "waist = " << waist << " in hex." << endl;

  cout << oct;
  cout << "waist = " << inseam << " in oct." << endl;


  return 0;
}