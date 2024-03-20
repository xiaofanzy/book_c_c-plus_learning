#include <iostream>
#include <string_view>
#include <format>

using namespace std;

string_view extractExtension(string_view filename);

int main(int argc, char const *argv[])
{
  const char * filename {R"(Hello World.txt)"};
  string filename1 {R"(Hello World.txt)"};

  // 这三个没有一次复制,用到的都是指针
  cout << format("{}",extractExtension(filename)) << endl;
  cout << format("{}",extractExtension(filename1)) << endl;
  cout << format("{}",extractExtension(R"(Hello World.txt)")) << endl;

  const char * raw {"do"};
  size_t length {50};

  //cout << format("{}",extractExtension(string_view{raw,length})) << endl;

  // 当方法能够返回string 或者string 的引用的时候,建议返回string 或者引用,而不是返回string_view 因为可能会但来返回无效的风险;

  // format
  //auto s1 {format("Read {0} bytes from {1} ",n,"file1.txt")};

  int i {42};
  cout << format("{:5}",i) << endl;
  cout << format("{:{}}",i,7) << endl;
  cout << format("{:7}",i) << endl;
  cout << format("{:<7}",i) << endl;
  cout << format("{:>7}",i) << endl;
  cout << format("{:^7}",i) << endl;
  cout << format("{:_^7}",i) << endl;

  cout << format("{:<7}",i) << endl;
  cout << format("{:<+7}",i) << endl;
  cout << format("{:< 7}",i) << endl;
  cout << format("{:< 7}",-i) << endl;
  return 0;
}

string_view extractExtension(string_view filename)
{
  return filename.substr(filename.rfind('.'));
}
