#include <iostream>
#include <string>
#include <cstring>

struct CandyBar
{
  std::string name;
  float weight;
  int caloil;
  char names[20];
};

int main(void)
{
  using namespace std;

  CandyBar candy[3] = {
    {"m",2.3,50,"T"},
    {"m",2.3,50,"T"},
    {"m",2.3,50,"T"}
  };

  for (int i = 0; i < 3; i++)
  {
    cout << candy[i].name << " " << candy[i].weight << " "
    << candy[i].caloil << " " << (candy + i)->names << endl;
  }
  


  return 0;
}