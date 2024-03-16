#include <iostream>
#include <climits>
#include <format>

using namespace std;
int main(int argc, char const *argv[])
{
  cout << "int:\n";
  cout << format("Max int value = {}\n",numeric_limits<int>::max());
  cout << format("Min int value = {}\n",numeric_limits<int>::min());
  cout << format("lowest int value ; {}\n",numeric_limits<int>::lowest());
  
  cout << "double:\n";
  cout << format("Max double value = {}\n",numeric_limits<double>::max());
  cout << format("Min double value = {}\n",numeric_limits<double>::min());
  cout << format("lowest double value ; {}\n",numeric_limits<double>::lowest());
    
  return 0;
}
