#include <iostream>
#include <ctime>

int main(void)
{
  using namespace std;
  int sec;

  cout << "enter the second you entered.";
  cin >> sec;
  clock_t delay = sec * CLOCKS_PER_SEC;
  clock_t start = clock();

  while (clock() - start < delay);
  
  cout << "Done!" << endl;
  return 0;
}