#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

void out(int r)
{
  cout << r << " ";
}

int main(int argc, char const *argv[])
{
  list<int> one(5,2);
  cout << "list one";
  for_each(one.begin(),one.end(),out);
  cout << endl;

  int stuff[5] = {1,2,3,4,5};
  list<int> two;
  two.insert(two.begin(),stuff,stuff + 5);
  cout << "list two";
  for_each(two.begin(),two.end(),out);
  cout << endl;

  int more[6] = {6,8,9,7,5,4};
  list<int> three(two);
  three.insert(three.end(),more,more + 5);
  cout << "list three";
  for_each(three.begin(),three.end(),out);
  cout << endl;

  cout << "List three minus 4s:";
  three.remove(4);
  cout << "list three";
  for_each(three.begin(),three.end(),out);
  cout << endl;

  cout << "List three after splice: ";
	three.splice(three.begin(), one);
	for_each(three.begin(), three.end(), out);
	cout << endl;

  cout << "unique:";
  three.unique();
  for_each(three.begin(), three.end(), out);
	cout << endl;

  cout << "sort";
  three.unique();
  three.sort();
  for_each(three.begin(), three.end(), out);
	cout << endl;

  	cout << "Sorted two mergerd into three: ";
	two.sort();
	three.merge(two);
	for_each(three.begin(), three.end(), out);
	cout << endl;	




  return 0;
}
