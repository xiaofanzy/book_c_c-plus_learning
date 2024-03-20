#include <iostream>
#include <format>
#include <string>
#include <charconv>

using namespace std;
int main(int argc, char const *argv[])
{
  string a = "abc";
  string b = "bcd";

  auto result {a <=> b};
  if(is_lt(result)) cout << "a > b" << endl;
  if (is_gt(result))
  {
    cout << "a < b" << endl;
  }

  if (is_eq(result))
  {
    cout << " a = b" << endl;
  }
  
  
  

  return 0;
}
