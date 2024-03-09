#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  vector<int> v_ar(10);

  copy(arr,arr + 10,v_ar.begin());

  vector<int>::iterator pr;
  for(pr = v_ar.begin();pr !=v_ar.end();pr++)
    cout << *pr << " ";
  cout << endl;
  cout << "------------------------" << endl;

  ostream_iterator<int,char> out_str(cout," ");
  copy(v_ar.begin(),v_ar.end(),out_str);
  cout << endl;
  cout << "------------------------" << endl;

  copy(v_ar.rbegin(),v_ar.rend(),out_str);
  cout << endl;
  cout << "------------------------" << endl;

  vector<int>::reverse_iterator ri;
  for(ri = v_ar.rbegin();ri != v_ar.rend();ri++)
    cout << *ri << " ";
  cout << endl;







  return 0;
}
