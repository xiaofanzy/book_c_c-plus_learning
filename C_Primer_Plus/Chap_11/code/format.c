#include <stdio.h>

#define MAX 10

int main(void)
{
  char first[MAX];
  char last[MAX];
  char formal[MAX + 10];
  double prize;

  puts("enter your first name.");
  gets(first);

  puts("Enter the last name.");
  gets(last);

  puts("Enter your prize money.");
  scanf("%lf",&prize);
  sprintf(formal,"%s %s:%6.2f",first,last,prize);

  puts(formal);

  return 0;
}