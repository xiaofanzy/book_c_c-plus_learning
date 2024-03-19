#include <iostream>
#include <utility>

using namespace std;

void ThirdParty(char * str){};

int main(int argc, char const *argv[])
{
  string str{"C++"};
  const string& constStr{as_const(str)};

  return 0;
}

void f(const char* str)
{
  // 抹去const_csat属性;
  ThirdParty(const_cast<char *>(str));
}



