#include <iostream>
#include <format>
#include <array>
#include <vector>
#include <utility>
#include <initializer_list>

using namespace std;
optional<int> getData(bool giceIt);
int makeSum(initializer_list<int> values);

int main(int argc, char const *argv[])
{
  std::array<int,3> arr{9,8,7};

  cout << format("Array Size = {}",arr.size()) << endl;

  cout << format("2nd element = {}",arr[1]) << endl;

  vector<int> myVector {11,22};
  myVector.push_back(33);
  myVector.push_back(44);

  cout << format("1st element = {}",myVector[0]) << endl;

  pair<double,int> myPair{1.23,5};

  cout << format("{} {}",myPair.first,myPair.second);


  // optional;
  std::optional<int> data1(getData(true));
  std::optional<int> data2(getData(false));

  cout << "date hasvalue = " << data1.has_value() << endl;
  cout << "data1 value = " << data1.value() << endl;
  cout << "or has 解引用 运算法" << *data1 << endl;

  cout << "date2 value = " << data2.value_or(0) << endl;

  if(data2)
  {
    cout << "data2 has a value." << endl; 
  }


  /**
   * 结构化绑定 
  */
  array values{11,22,33};
  // 1. 必须使用auto 
  auto [x1,y1,z1]{values};
  cout << format("{} {} {}",x1,y1,z1) << endl;

  // 2. 结构体也可以结构化绑定
  struct Point
  {
    double m_x;
    double m_y;
    double m_z;
  };
  Point point;
  point.m_x = 1,point.m_y = 2,point.m_z = 3;
  auto [x,y,z]{point};
  cout << format("{} {} {}",x,y,z) << endl;

  pair myPairs{"hello", 5};

  auto [thenString,thePair] {myPairs};
  cout << format("thenString = {}",thenString) << endl;
  cout << format("theInt = {}",thePair) << endl;


  /**
   * 循环
  */
  array arr1{1,2,3,4,5};
  for(int i: arr1){cout << i << " ";}
  cout << endl;

  // c++ 20 新增
  for(array arr2{1,2,3,4,5};int i : arr2)
  {
    cout << i << endl;
  }

  // 初始化列表
  int a {makeSum({1,2,3})};
  int b {makeSum({22,33,44})};
  cout << a << " " << b << endl;

  return 0;
}

optional<int> getData(bool giceIt)
{
  if (giceIt)
  {
    return 42;
  }
  return nullopt;
  
}

int makeSum(initializer_list<int> values)
{
  int total{0};
  for(int value : values)
  {
    total += value;
  }

  return total;
}
