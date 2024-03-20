#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <charconv>

using namespace std;

int main(int argc, char const *argv[])
{
  
  // 不要通过sizeof来获得字符串的大小,根据C风格的字符串的存储方式返回不同大小;
  char text1[]{"abcdef"};
  size_t t1{strlen(text1)};
  size_t t2{sizeof(text1)};

  const char* str{"Hello \"World\""};
  const char* st{R"(Hello "World")"};

  string a {"12"};
  string b{"34"};
  string c = a + b;
  a += b;

  cout << "a = " << a << " c = " << c << endl; 

  auto result {a.compare(b)};
  if (result < 0)
  {
    cout << "more " << endl;
  }

  // 三向运算符
  auto re {a <=> b};
  if(is_lt(re)) cout << "less" << endl;
  if(is_gt(re)) cout << "greater" << endl;
  if(is_eq(re)) cout << "equal" << endl;

  string strHello{"Hello"};
  string strWorld{"The World..."};
  auto position {strHello.find("!!")};
  /* if (position != string::npos)
  {
    strHello.replace(position,2,strWorld.substr(3,6));
  }
  cout << strHello << endl; */

  auto string1 {"Hello World"};   // const char *
  auto string2 {"Hello World"s};  // string

  // 注意,vector 默认类型是vector<const char*> 而不是vector<string>
  std::vector names {"Name","Sam"}; // const char *
  std::vector names1 {"Name"s}; // string

  // 数值转换为字符串
  long double d {3.14L};
  string s {to_string(d)};

  //数值转换为字符串
  //type 
  // to_chars_result to_chars(char* first,char* last,IntegerT value,int base = 10);
  struct to_chars_result
  {
    char * ptr; // ptr 指向字符尾一位置的指针,这是为了方便计算铲毒
    errc ec;    // ec == errc.value_too_large 代表转换失败,
  };

  string outs{50,' '};
  auto result1 {to_chars(outs.data(),outs.data() + outs.size(),12345)};
  if (result1.ec == errc{})
  {
    cout << outs << endl;
  }
  string out{50,' '};
  auto [ptr,error] {to_chars(out.data(),out.data() + out.size(),12345)};
  if (error == errc{})
  {
    cout << out << endl;
  }

  double value{0.1314};
  
  auto [ptr1,error1] { to_chars(out.data(),out.data() + out.size(),value)};
  if (error1 == errc{}) // 注意,如果== 代表转换成功,而不是!=
  {
    cout << out << endl;
  }

  // 字符串转换为数值, from_chars;
  double value1{0.134};
  const int BufferSize = 50;
  string out2{BufferSize,' '};

  auto [ptr3,error3] {to_chars(out2.data(),out2.data() + out2.size(),value1)};
  if (error3 == errc{})
  {
    cout << out << endl;
  }
  


  
  


  return 0;
}

char* copyString(const char* str)
{
  char* result{new char[strlen(str) + 1]};
  strcpy(result,str);
  return result;
}

char* appendStrings(const char* str1,const char* str2,const char* str3)
{
  char* result{new char[strlen(str1) + strlen(str2) + strlen(str3) + 1]};
  strcpy(result,str1);
  strcat(result,str2);
  strcat(result,str3);
  return result;
}


