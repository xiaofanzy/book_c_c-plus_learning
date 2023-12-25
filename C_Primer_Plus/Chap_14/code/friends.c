#include <stdio.h>

#define LEN 20

struct names
{
  char first[LEN];
  char last[LEN];
};

struct guy
{
  struct names handle;
  char favfood[LEN];
  char job[LEN];
  float income;
};

int main(void)
{
  struct guy fellow[2] = {
    {
      {"zhang","xiaofan"},
      "grilled salmon",
      "personality coach",
      58112.00
    },
    {
      {"zhang1","xiaofan1"},
      "grilled salmon1",
      "personality coach1",
      5811211.00
    }
  };

  struct guy *pt;

  pt = &fellow[0];
  printf("Address : %p, pt + 1 = %p.\n",pt, pt + 1);
  printf("when pt = &fellow = %p.\n",&fellow);
  printf("fellow.job = %s.\n",pt ->job);

  return 0;
}