#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << " int is " << sizeof(n_int) << " bytes." << endl;
  cout << "short is " << sizeof(n_short) << " bytes." << endl;
  cout << "long is " << sizeof(long) << "bytes." << endl;
  cout << "long long is " << sizeof(long long) << "bytes." << endl;

  cout << "Maximun value:" << endl;
  cout << "int :" << n_int << endl;
  cout << "short: " << n_short << e ndl;
  cout << "long: " << n_long << endl;
  cout << "long long: " << n_llong << endl;
  
  return 0;
}
