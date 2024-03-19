#include <iostream>
#include <exception>


using namespace std;

int main(int argc, char const *argv[])
{

  try
  {
    cout << divide(1.5,0);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  
  return 0;
}

double divide(double numberator,double denominator)
{
  if (denominator == 0)
  {
    throw std::invalid_argument{"De"};
  }
  return numberator / denominator;
  
}

