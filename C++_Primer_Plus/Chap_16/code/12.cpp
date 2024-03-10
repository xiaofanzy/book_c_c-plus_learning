#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>


using namespace std;

int main(int argc, char const *argv[])
{
  const int N = 6;

	string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
	string s2[N] = {"metal", "any", "food", "elegant", "deliver", "for"};

  set<string> A(s1,s1+N);
  set<string> B(s2,s2+N);

  ostream_iterator<string,char> out(cout, " ");
  cout << "Set A:";
  copy(A.begin(),A.end(),out);
  cout << endl;

  cout << "A union B";
  set_union(A.begin(),A.end(),B.begin(),B.end(),out);
  cout << endl;

  cout << "Intersection of A and B: ";
  set_difference(A.begin(),A.end(),B.begin(),B.end(),out);
  cout << endl;

  set<string> c;
  cout << "Set c" << endl;
  set_union(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<set<string>>(c,c.begin()));
  copy(c.begin(),c.end(),out);
  cout << endl;  

  string s3("Grungy");
  c.insert(s3);
  copy(c.begin(),c.end(),out);
  cout << endl;

  cout << "Showing a ranger : " << endl;
  copy(c.lower_bound("G"),c.upper_bound("H"),out);
  cout << endl;



  return 0;
}
