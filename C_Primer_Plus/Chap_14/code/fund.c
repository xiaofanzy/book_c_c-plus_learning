#include <stdio.h>

#define FUNDLEN 50

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

int main(void)
{

  struct funds stan = {
    "g",
    1012.01,
    "p",
    552.01
  };

  // 本身
  printf("%.2f.\n",sum(stan.bankfund,stan.savefund));

  // 指针
  printf("%.2f.\n",sum_1(&stan));

  // 结构体
  printf("%.2f.\n",sum_2(stan));


  return 0;
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