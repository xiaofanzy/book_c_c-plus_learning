#include <iostream>

using namespace std;

int main(void)
{
  long long person_total_US,person_total_ALL;

  cout << "Enter the world's population:";
  cin >> person_total_ALL;
  cout << "Enter the population of the US:";
  cin >> person_total_US;

  cout << "The population of the US is " << 100 * ((double)person_total_US / (double)person_total_ALL)
  << "% of the world population.\n"; 

  return 0;
}