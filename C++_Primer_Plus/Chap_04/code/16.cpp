#include <iostream>

int main(void)
{
  using namespace std;

  int update = 6;
  int *pt;

  pt = &update;

  cout << "value = " << update << " , *pt = " << pt << endl;
  cout << " pt = " << pt << " and *pt = " << *pt << endl; 
  *pt =*pt + 1;
  cout << "value = " << update << " , *pt = " << pt << endl;

  return 0;
}