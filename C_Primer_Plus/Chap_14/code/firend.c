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
  struct guy fellow = {
    {"zhang","xiaofan"},
    "grilled salmon",
    "personality coach",
    58112.00
  };

  printf("%s %s\n",fellow.handle.first,fellow.handle.last);


  return 0;
}