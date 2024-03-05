#include <iostream>

using namespace std;

template<class T1,class T2>
class A
{
  public:
    void show();
};


// 隐式实例化
template<class T1,class T2>
void A<T1,T2>::show()
{
  cout << "普通" << endl;
}

// 显式实例化
template class A<double,double>;

// 显示具体化
template<>
class A<int,int>
{
  public:
    void show();
};


void A<int,int>::show()
{
  cout << "显示具体化" << endl;
}

template<class T1>
class A<T1,int>
{
  public:
    void show();
};

template<class T1>
void A<T1,int>::show()
{
  cout << "显示部分具体化" << endl;
}


int main()
{
  A<char,char> a1;
  a1.show();

  A<int,int> a2;
  a2.show();

  A<double,int> a3;
  a3.show();


  return 0;
}