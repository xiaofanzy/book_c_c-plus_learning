#include <iostream>

int main(void)
{
  using namespace std;

  const int MONTH_SIZE = 12;

  char *arr[MONTH_SIZE] = {
    "January","February", "March", "April", "May", "June", 
                "July", "August", "September", "October", "November", "December"};

  int ar_size[3][MONTH_SIZE];
  int total_sales[3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < MONTH_SIZE; j++)
    {
      cout << " Plese enter " << i + 1 << " years " << j + 1 << " month sales:";
      cin >> ar_size[i][j];
      total_sales[i] += ar_size[i][j];
    }
  }

  int total = 0 ;

  for (int i = 0; i < 3; i++)
  {
    cout << "the " << i + 1 << " year sales " << total_sales[i] << " books" << endl;
    total += total_sales[i];
  }
  
  cout << " the three years sales " << total << " books" << endl;


  return 0;
}