#include <iostream>

using namespace std;

const double revenue_1 = 5000;
const double revenue_2 = 15000;
const double revenue_3 = 35000;

const double reven_percent_1 = 0.1;
const double reven_percent_2 = 0.15;
const double reven_percent_3 = 0.20; 

int main(void)
{
  double salary;
  

  cout << "Please enter your salary:" << endl;

  while (cin >> salary && salary > 0)
  {
    double revenue = 0.0;
    if (salary > revenue_3)
    {
      revenue = (salary - revenue_3) * reven_percent_3 + 
      revenue_1 * 0.00 + revenue_2 * reven_percent_1
      + revenue_3 * reven_percent_2;
    }
    else if (salary > revenue_2)
    {
      revenue = (salary - revenue_2) * reven_percent_2 + 
      revenue_1 * 0.00 + revenue_2 * reven_percent_1;
    }
    else if (salary > revenue_1)
    {
      revenue = (salary - revenue_1) * reven_percent_1 + 
      revenue_1 * 0.00;
    }
    
    cout << " your revenue is " << revenue << " money." << endl;
    cout << "Pleae enter another:";   
  }

  cout << "Bye!" << endl;
  


  return 0;
}