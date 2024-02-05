#include <iostream>

using namespace std;

void swapr(int &a,int &b);
void swapp(int *a,int *b);
void swapv(int a,int b);

int main(void)
{

  int wallet1 = 300;
  int waller2 = 350;

  cout << "Using reference to swap contents:" << endl;
  swapr(wallet1,waller2);
  cout << "wallet1 = " << wallet1 << " and wallet2 = " << waller2 << endl;
  
  cout << "Using pointer to swap contents:" << endl;
  swapp(&wallet1,&waller2);
  cout << "wallet1 = " << wallet1 << " and wallet2 = " << waller2 << endl;

  cout << "Using to use passing by value:" << endl;
  swapv(wallet1,waller2);
  cout << "wallet1 = " << wallet1 << " and wallet2 = " << waller2 << endl;


}

void swapr(int &a,int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swapp(int *a,int *b)
{
  int pt;
  pt = *a;
  *a = *b;
  *b = pt;
}

void swapv(int a,int b)
{
  int temp = a;
  a = b;
  b = temp;
}


