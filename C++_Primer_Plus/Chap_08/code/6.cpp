#include <iostream>
#include <string>
using namespace std;

struct free_throws
{
  string name;
  int made;
  int attempts;
  float percent;
};
void set_pc(free_throws &re);
void display(const free_throws &fe);
free_throws &accumulate(free_throws &fe,const free_throws &p);
int main(void)
{
  free_throws one = {"Ifelsa Branch",13, 14};
  free_throws two = {"Andor Knott", 10,16};
  free_throws three = {"Minnie Max",7,9};
  free_throws four = {"Whily Looper",5,9};
  free_throws five = {"long long",6,14};
  free_throws team = {"Throwgoods",0,0};

  set_pc(one);
  display(one);
  accumulate(accumulate(accumulate(accumulate(accumulate(team,one),two),three),four),five);
  display(team);




  return 0;
}

void set_pc(free_throws &re)
{
  if (re.attempts != 0)
  {
    re.percent = 100.0 * double(re.made) / double(re.attempts);
  }
  else
  {
    re.percent = 0;
  }
}

void display(const free_throws &fe)
{
  cout << "name = " << fe.name << endl;
  cout << "made = " << fe.made << " and attempt = " << fe.attempts << " and percent = " << fe.percent << endl;
}

free_throws &accumulate(free_throws &fe,const free_throws &p)
{
  fe.made += p.made;
  fe.attempts += p.attempts;
  set_pc(fe);
  return fe;
}