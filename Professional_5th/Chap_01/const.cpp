#include <iostream>
#include <string>

using namespace std;

void mysteryFunction(const string *someString)
{
  // *someString = "test";  //error
}

constexpr const int getArraySize() {return 32;}
void printString(const string& mystring);

int main(int argc, char const *argv[])
{
  // 这俩一样 能改位置,不能改值
  //const int *ip = new int;
  //int const *ip = new int;

  // 这个能改值,但是不能改地址;
  // 这个地址一旦指明,就无法更改
  ///int *const isp{nullptr};

  //int const* const ip{nullptr};
  // 等同于
  // const int 说明指向的int 值不能变; int * cosnt  说明指向的地址不能变;
 // const int * const ip = new int;

  /**
   * constexpr 关键字
  */
  int arr[getArraySize()];


  // const 引用传递
  string somestring{"Hello World"};
  printString(somestring);
  printString("Hello world");

  return 0;
}

void printString(const string& mystring)
{
  cout << mystring << endl;
}
