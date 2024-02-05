#include <iostream>
#include <string>
#include <array>

using namespace std;
const int Sersons = 4;

const array<string,Sersons> Snames = {"Spring","Summer","Fail","Winter"}; 

void show(const array<double,Sersons> *e);
void fill(array<double,Sersons> *e);

int main(void)
{
  array<double,Sersons> expenses;
  fill(&expenses);
  show(&expenses);

  return 0;
}

void fill(array<double,Sersons> *e)
{
  for (int i = 0; i < Sersons; i++)
  {
    cout << "Enter the " << Snames[i] << " expense : ";
    cin >> (*e)[i];
  }
}

void show(const array<double,Sersons> *e)
{
  int total = 0;
  for (int i = 0; i < Sersons; i++)
  {
    cout << "The " << Snames[i] << " expense:" << (*e)[i] << " dollers." << endl;
    total += (*e)[i];
  }
  cout << "The total is " << total << endl;
}