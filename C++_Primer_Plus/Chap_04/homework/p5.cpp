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

  CandyBar snack;
  snack.name = "Mocha Munch";
  snack.caloil = 350;
  snack.weight = 2.3;
  // 对于结构体char 数组对象只能使用函数进行赋值
  strcpy(snack.names,"MO");

  cout << snack.name << " " << snack.weight << " " << snack.caloil  << " " << snack.names << endl;

  return 0;
}