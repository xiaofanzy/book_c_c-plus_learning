#include <iostream>

using namespace std;

int main(void)
{

  cout.setf(ios_base::fixed,ios_base::floatfield);

  cout << "Intege division = " << 9 / 5 << endl;
  cout << "float division =  " << 9.0/5.0 << endl;
  cout << "Mixed division = " << 9.0 / 5 << endl;
  cout << "double division = " << 1e7 / 9.0 << endl;
  cout << "float constance = " << 1e7f / 9.0f << endl;

  return 0;
}