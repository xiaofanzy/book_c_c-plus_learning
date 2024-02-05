# include <iostream>

using namespace std;
template <typename T>
void Swap(T &a, T &b);

int main(void)
{
  int i = 10;
  int j = 20;
  cout << "before i = " << i << " and j = " << j << endl;
  double x = 19.0;
  double y = 20.0;
  cout << "before x = " << x << " and y = " << y << endl;

  Swap(i,j);
  cout << "After i = " << i << " and j = " << j << endl;
  Swap(x,y);
  cout << "After x = " << x << " and y = " << y << endl;

  return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
  T temp;
  temp = a;
  a = b;
  b = temp;
}