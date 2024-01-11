#include <iostream>
#include <string>

struct Pizza
{
  std::string pizzaName;
  float length;
  float weight;
};


int main(void)
{
  using namespace std;

  Pizza * pizza = new Pizza;

  cout << "name:";
  getline(cin,pizza->pizzaName);
  cout << "length:";
  cin >> pizza->length;
  cout << "weight:";
  cin >> pizza->weight;

  cout << "The pizza is " << pizza->pizzaName << " " 
    << pizza->length << " " << pizza->weight << endl;

  delete pizza;


  return 0;
}