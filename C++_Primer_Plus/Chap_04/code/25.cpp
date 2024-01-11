#include <iostream>
#include <vector>
#include <array>

int main(void)
{
  using namespace std;

  double arr1[4] = {2.0,3.0,4.0,5.0};
  vector<double> arr2(3); // 这个放在堆中，其余的array 或者数组都是放在栈中
  arr2[0] = 1.0;
  arr2[1] = 2.0;
  arr2[2] = 3.0;

  array<double,4> arr3 = {2.0,3.0,4.0,5.0};

  array<double,4> arr4 = arr3;

  arr1[-2] = 20.0;

  cout << "arr1[2] = " << arr1[2] << " at " << &arr1[2] << endl;
  cout << "arr2[2] = " << arr2[2] << " at " << &arr2[2] << endl;
  cout << "arr3[2] = " << arr3[2] << " at " << &arr3[2] << endl;
  cout << "arr4[2] = " << arr4[2] << " at " << &arr4[2] << endl;
  return 0;
}