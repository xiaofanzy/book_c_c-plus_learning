#include <iostream>

const int Fave = 27;

int main(void)
{
  using namespace std;

  cout << "enter the number?";
  int n;
  do
  {
    cin >> n;
    if (n < Fave)
    {
      cout << "Small";
    }
    else
    {
      cout << "Big";
    }
    
    

  } while (n != Fave);
  


  return 0;
}