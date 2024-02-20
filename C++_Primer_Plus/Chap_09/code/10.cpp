#include <iostream>
#include <new>

using namespace std;
const int N = 5;
const int ArSize = 50;
char buffer[ArSize];

int main(void)
{
  double *pd1,*pd2;
  pd1 = new double[N];
  pd2 = new(buffer) double[N];

  for (int i = 0; i < N; i++)
  {
    pd1[i] = pd2[i] = 1000 + 20.0 * i;
  }
  // 强制类型转换成指针类型，答应指针地址
  cout << "pd1 address: " << pd1 << " and buffer address: " << (void *)buffer << endl;
  for (int i = 0; i < N; i++)
  {
    cout << pd1[i] << " at " << &pd1[i] << " and " << pd2[i] << &pd2[i] << endl;
  }

  double *pd3,*pd4;
  pd3 = new double[N];
  pd4 = new(buffer) double[N];
  cout << endl;
  for (int i = 0; i < N; i++)
  {
    pd3[i] = pd4[i] = 1000 + 40.0 * i;
  }
  for (int i = 0; i < N; i++)
  {
    cout << pd3[i] << " at " << &pd3[i] << " and " << pd4[i] << &pd4[i] << endl;
  }

  cout << endl;
  delete [] pd1;
  pd1 = new double[N];
  pd2 = new(buffer + N * sizeof(double)) double[N];

  for (int i = 0; i < N; i++)
  {
    pd1[i] = pd2[i] = 1000 + 20.0 * i;
  }
  for (int i = 0; i < N; i++)
  {
    cout << pd1[i] << " at " << &pd1[i] << " and " << pd2[i] << &pd2[i] << endl;
  }

  delete [] pd1;
  delete [] pd3;

  return 0;
}
