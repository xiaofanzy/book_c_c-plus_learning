#include <stdio.h>

#define FUNDLEN 50
#define SIZE 2
struct funds
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(double x,double y);
double sum_1(const struct funds *money);
double sum_2(const struct funds st);
double sum_3(const struct funds stan[], int s);

int main(void)
{

  struct funds stan[SIZE] = {
    {
      "g",
      1012.01,
      "p",
      552.01
    },
    {
      "g1",
      1012.21,
      "p1",
      552.41
    }
  };


  // 结构体
  printf("%.2f.\n",sum_3(stan,SIZE));


  return 0;
}

double sum_3(const struct funds stan[], int s)
{
  double total;
  for (int i = 0; i < s; i++)
  {
    total += stan[i].bankfund + stan[i].savefund;
  }
  
  return total;
}

double sum(double x,double y)
{
  return x + y;
}

double sum_1(const struct funds *money)
{
  return money->bankfund + money->savefund;
}

double sum_2(const struct funds st)
{
  return st.bankfund + st.savefund;
}