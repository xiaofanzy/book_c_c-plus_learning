#include <iostream>

const float capital = 100.0;

int main(void)
{
  using namespace std;

  float earn_D = capital * 1.1,eran_C = 1.05 * capital;
  int year = 1;
  int capital_C = 0;

  while (earn_D >= eran_C)
  {
    year++;
    earn_D += 1.1 * capital;
    capital_C += capital_C;
    eran_C += capital_C * 1.05; 
  }

  cout << "After " << year << " year ,c is more than d" << endl;
  
  
  
  
  

  return 0;
}