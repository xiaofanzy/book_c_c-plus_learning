#include <iostream>

using namespace std;

const int SIZE = 10;
double average(double sc[],int len);
int get_score(double sc[],int len);
void show_score(const double sc[],int len);

int main(void)
{
  double score[SIZE];
  cout << "Enter glof socre:";

  int ar_size = get_score(score,SIZE);
  show_score(score,ar_size);
  double ave = average(score,ar_size);
  cout << "The average score is " << ave << endl;

  return 0;
}

int get_score(double sc[],int len)
{
  int times = 0;
  double temp;
  while (cin >> temp && times < len)
  {
    sc[times++] = temp;
  }
  return times;
}

void show_score(const double sc[],int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << sc[i] << " is " << i + 1 << " values" << endl;
  }
  
}

double average(double sc[],int len)
{
  double total = 0.0;
  for (int i = 0; i < len; i++)
  {
    total += sc[i];
  }
  return total / len;
}