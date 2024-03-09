#include<iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

void out_s(const string &s)
{
  cout << s << " ";
}

int main(int argc, char const *argv[])
{
  string s3[2] = {"Hello","World"};
  string s1[3] = {"a","b","c"};
  string s2[1] = {"gdds"};

  vector<string> words(4);

  copy(s1,s1+2,words.begin());
  for_each(words.begin(),words.end(),out_s);
  cout << endl;

  copy(s2,s2+1,back_insert_iterator<vector<string>>(words));
  for_each(words.begin(),words.end(),out_s);

  copy(s3,s3+2,insert_iterator<vector<string>>(words,words.begin()));
  for_each(words.begin(),words.end(),out_s);


  return 0;
}
