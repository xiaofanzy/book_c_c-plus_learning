#include <iostream>

using namespace std;

struct job
{
  char name[40];
  int floor;
  double salary;
};

//void show(int a);

template <typename T>
void show(T &t);

template <> void show<int>(int &value);

template void show<int>(int &v);

/**
 * 1. 具体类型的函数执行优于 具体化函数执行，具体化函数执行优于函数模板
 * 2. 显式实例化 不能与具体化函数同时使用；
 * 3. 具体化函数主要解决的是当函数模板不匹配的情况下的处理情况；
 *    而 显式实例化主要是解决模板函数被不同文件调用生成多个具体示例函数的情况；
*/
int main(void)
{
  
  int a = 10;
  int b = 20;

  job x = {"zhagnsan",10,1000.0};
  job y = {"lisi",11,100000.0};

  cout << "before swap:";
  show(a);
  show(b);
  return 0;
}

template <typename T>
void show(T &t)
{
  cout << "negative method:" << endl;
  cout << "value = " << t << endl;
}

/**
 * 函数具体化，首先要和模板函数一致，当show(&v) 的时候，那么
 * 函数具体化也应该是show(int &),而不是值
*/
template <> void show<int>(int &value)
{
  cout << "simple method" << endl;
  cout << "value = " << value << endl;
}

/* void show(int a)
{
  cout << "specifal method" << endl;
  cout << "value " << a << endl;
} */