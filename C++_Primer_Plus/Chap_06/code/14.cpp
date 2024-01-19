#include <iostream>

int main(void)
{
  using namespace std;

  const int MAX = 5;

  int fish[MAX];

  int total = 0;

  cout << "fist #1:";

  int i =0;

  while (i < MAX && cin >> fish[i])
  {
    if (++i < MAX)
    {
      cout << "Please enter the next fish weight:";

    }
      
  }

  for (int j = 0; j < i; j++)
  {
    total += fish[j];
  }
  
  if (0 == i)
  {
    cout << "No fish" << endl;
  }
  else
  {
    cout << "The average weight of fish is " << total / i << endl;
  }
  
  
  
  
  



  return 0;
}