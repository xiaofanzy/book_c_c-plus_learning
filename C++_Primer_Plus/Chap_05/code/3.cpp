#include <iostream>

const int ArSize = 16;

int main(void)
{
  long long factorials[ArSize];

  factorials[0] = factorials[1] = 1;

  for (int i = 2; i < ArSize; i++)
  {
    factorials[i] = i * factorials[i-1];
  }

  for (int i = 0; i < ArSize; i++)
  {
    std::cout << i << "! = " << factorials[i] << std::endl;
  }
  
  


  return 0;
}