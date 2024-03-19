#include <iostream>
#include <string>
using namespace std;

string getString();

int main(int argc, char const *argv[])
{
  // 1.  引用必须在创建时指向被引用值,必须创建的时候初始化;
  int x{3};
  int &xRef{x};

  // 2. 引用一旦指向,就无法修改;只能更改被引用变量的值
  int x{3},y{4};
  int & yRef{y};

  // 3. const 作用于引用,代表无法修改原引用的值;
  const int & pt = x;
  // pt = 4;

  // 除非是cosnt 否则不能指向常量
  // int & unnameRef1{5};
  // const int &unnameRef2{5};

  // 不能创建对临时对象得的引用,但是可以指向cosnt 
  // string &string1{getString();}
  const string &string2{getString()};

  // 引用的传递会修改原始值,值传递不会修改原始值


  return 0;
}

string getString(){return "HEllo world";}

