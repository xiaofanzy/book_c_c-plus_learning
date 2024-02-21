#include <iostream>
#include "stock10.h"

using namespace std;

int main(void)
{
  Stock stock = Stock("no2",50,56.012);
  stock.show();

  Stock stock2("no3",66,77.12);
  stock2.show();

  cout << "Assigining stock1 to stock2: \n";
  stock = stock2;
  cout << "show : \n";
  stock.show();
  stock2.show();

  cout << "revised stock1 : \n";
  stock = Stock("Food",60,5.23);
  stock.show();
  cout << "Done \n";

  const Stock st = Stock("no4",50,0.25);
  st.show();

  cout << "between this :" << endl;
  stock.tobe(stock2).show();

  /* Stock stock3;
  stock3.show(); */ 

  /* Stock stock4;
  stock4.show(); */

  return 0;
}