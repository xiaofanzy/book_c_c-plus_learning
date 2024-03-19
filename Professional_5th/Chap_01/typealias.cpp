#include <iostream>
#include <string>
#include <utility>

using IntPtr = int *;
typedef int* IntP;

int main(int argc, char const *argv[])
{
  IntPtr p1; // = int * p1;

  std::string str{"C++"};
  // 这里的result 是 string 而不是引用
  auto result{as_const(str)};

  // 虽然说p1 是指针,但是建议还是写清楚一点;
  auto p1{&str};
  auto  *p2{&str};

  // 为什么建议这么做的是因为,如果你希望不修改字段;
  const auto p1{&str};  // 实际上是 cosnt int * p1 这个锁住的是值,
  // 但是如果我么使用auto*就可以锁住指针
  const auto * const p1{&str};

  // copy must be same typevalye
  auto c{11};
  // auto d{11,22.3};


  







  return 0;
}
