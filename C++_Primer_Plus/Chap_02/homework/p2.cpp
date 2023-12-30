#include <iostream>
using namespace std;

long convert(long di);

int main(void)
{
  long distince;

  cout << "enter the distince:";
  cin >> distince;

  long yard = convert(distince);

  cout << "The " << distince << " distince is equals " << yard << " yards." << endl;

  return 0;
}

long convert(long di)
{
  return 220 * di;
}