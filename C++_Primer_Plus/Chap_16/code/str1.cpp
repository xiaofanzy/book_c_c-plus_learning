#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string one("Lottery");
  cout << one << endl;

  string two(20,'$');
  cout << two << endl;

  string three(one);
  cout << three << endl;

  one += " opps";
  cout << one << endl;

  two = "Sorry that was ";
  three[0] = 'P';
  string four;
  four = two + three;
  cout << four << endl;

  char alls[] = "All's well what end well.";
  string five(alls,20);
  cout << five << endl;

  string six(alls + 6,alls + 20);
  cout << six << endl;

  string seven(&five[6],&five[10]);
  cout << seven << endl;

  string eight(four,6,11);
  cout << eight << endl;


  return 0;
}