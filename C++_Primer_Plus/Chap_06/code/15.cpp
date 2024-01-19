#include <iostream>

const int SIZE = 5;

int main(void)
{
  using namespace std;

  int golf[SIZE];
  double total = 0.0;

  cout << "enter the first score:";

  for (int i = 1; i < 5; i++)
  {
    while (!(cin >> golf[i]))
    {
      cin.clear();
      while (cin.get() != '\n');
    }

    if (i + 1 < SIZE)
    {
      cout << "Enter " << i + 1 << " score." << endl;
    }
    
    
  }

  for (int i = 0; i < SIZE; i++)
  {
    total += golf[i];
  }

  cout << "Average scoere is " << total / SIZE << "." << endl;
  
  



  return 0;
}