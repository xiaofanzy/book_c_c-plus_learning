#include <iostream>
#include <algorithm>
#include <valarray>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
  int ar[5] = {1,2,3,4,5};

  valarray<int> temp(5);

  for (int i = 0; i < 5; i++)
  {
    temp[i] = ar[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cout << temp[i] << endl;
  }

  valarray<int> another = temp + 2;
  for (int i = 0; i < 5; i++)
  {
    cout << "temp " << i + 1 << ":" << temp[i] << " and another" << i + 1 << " : " << another[i] << endl;
  }

  valarray<bool> an = temp > 2;

  for (int i = 0; i < 5; i++)
  {
    cout << an[i] << endl;
  }
  

  
  
  return 0;
}
