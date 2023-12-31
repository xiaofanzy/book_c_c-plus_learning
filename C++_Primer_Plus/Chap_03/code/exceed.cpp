#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
  short sam = SHRT_MAX;
  unsigned short sue = sam;

  cout << "Sam has " << sam << "dollers and sue has "
    << " dollars" << endl;
  
  cout << "Add $1 each account."<< endl;

  sam = sam + 1;
  sue = sue + 1;

  cout << "Sam has " << sam << "dollers and sue has " << sue 
    << " dollars" << endl;

  sam = sue = 0;
  sam -=1;
  sue -=1;

  cout << "Sam has " << sam << "dollers and sue has "
    << " dollars" << endl;

  return 0;
}