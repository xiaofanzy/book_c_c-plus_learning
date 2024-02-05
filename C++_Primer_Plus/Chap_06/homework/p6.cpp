#include <iostream>

using namespace std;

struct donation
{
  std::string name;
  double money;
};


int main(void)
{

  donation * sympathy  = new donation;

  cout << "Enter the name:";

  getline(cin,sympathy->name);
  



  delete [] sympathy;

  return 0;
}