#include <iostream>
#include <charconv>

using namespace std;

int main(int argc, char const *argv[])
{
  const int BufferSize = 50;
  double value{0.134};
  string out {BufferSize,' '};

  auto [ptr,error] {to_chars(out.data(),out.data() + out.size(),value)};
  if (error == errc{})
  {
    cout << out << endl;
  }
  cout << "---------------" << endl;
  double value2 = 0;
  auto [ptr1,error1] {from_chars(out.data(),out.data() + out.size(), value2)};
  if (error1 == errc{})
  {
    cout << value2 << endl;
  }
  
  
  



  return 0;
}
