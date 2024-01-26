#include <iostream>

using namespace std;
double jack(int lines);
double tom(int lines);
void estimeate(int l,double (*pt)(int));

int main(void)
{
  int lines;
  cout << "Hour many line you need :" << endl;
  cin >> lines;
  cout << "Here is jack need hours:";
  estimeate(lines,jack);
  estimeate(lines,tom);

  return 0;
}

double jack(int lines)
{
  return lines * 0.05;
}

double tom(int lines)
{
  return lines + lines * lines * 0.004;
}


void estimeate(int l,double (*pt)(int))
{
  cout << "The " << l << " line need " << pt(l) << "seconds. " << endl;
  
}