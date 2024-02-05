#include <iostream>

using namespace std;

long double probability(int number,int choice);

int main(void)
{
  int number,choice;
  cout << "enter the total number of choice in the game card and the numbre of picks allowed:" << endl;

  while ((cin >> number >> choice) && choice < number)
  {
    cout << "You have one change in " << probability(number,choice) << " of winning." << endl;
    cout << "Pelase enter next two number (q to quit):" << endl;
  }
  
  return 0;
}

long double probability(int number,int choice)
{
  double n,p;
  long double result = 1.0;

  for(n = number;p = choice,p > 0;n--,p--)
  {
      result = result * (n /p);
  }

  return result;
}