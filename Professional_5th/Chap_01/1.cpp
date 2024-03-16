#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
  /* 
   零初始化:{}
   */
  float myFloat{};
  int myInt{};

  /* 类型转换 */
  float myFloat{3.4f};
  int f1{(int)myFloat};
  int f2{int(myFloat)};
  int f3{static_cast<int>(myFloat)};  // 推荐这种

  1



  return 0;
}
