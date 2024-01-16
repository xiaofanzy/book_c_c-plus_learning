#include <iostream>

const int ARSIZE  = 20;

int main(void)
{
  using namespace std;

  char name[ARSIZE] = "word";

  int i = 0;

  while (name[i])
  {
    cout << name[i] << ": " << int(name[i]) << endl;
    i++;
  }
  


  return 0;
}