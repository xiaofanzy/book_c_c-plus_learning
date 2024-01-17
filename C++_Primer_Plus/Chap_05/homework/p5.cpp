#include <iostream>

int main(void)
{
  using namespace std;

  const int MONTH_SIZE = 12;

  char *arr[MONTH_SIZE] = {
    "January","February", "March", "April", "May", "June", 
                "July", "August", "September", "October", "November", "December"};

  int ar_size[MONTH_SIZE];
  int total_sales = 0;

  for (int i = 0; i < MONTH_SIZE; i++)
  {
    cout << "PLease enter the " << arr[i] << " mounth sales:" << endl;
    cin >> ar_size[i];
    total_sales += ar_size[i];
  }

  cout << "The total is " << total_sales << " books" << endl;



  


  return 0;
}