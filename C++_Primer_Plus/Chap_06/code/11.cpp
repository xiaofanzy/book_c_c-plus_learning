#include <iostream>

using namespace std;

enum {RED,BLUE};

int main(void)
{
  int code;

  cout << "Enter the code";
  cin >> code;

  while (code >= RED && code <= BLUE)
  {
    switch (code)
    {
    case RED:
      cout << "You choose Red:" << endl;
      break;
    case BLUE:
      cout << "You choose Blue" << endl;
      break;
    default:
      break;
    }
    cin >> code;
  }
  
  return 0;
}