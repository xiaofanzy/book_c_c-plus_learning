#include <iostream>

using namespace std;

const int FIRST_SIZE = 47;
const int SECOND_SIZE = 27;
const int AR_SIZE = 5;

double get_five_num();
int main(void)
{
  double percent = get_five_num();

  percent *= 27;

  cout << "percent is " << percent << endl;
  return 0;
}

double get_five_num()
{
  return 47 * 46 * 45 * 44 * 43;
}