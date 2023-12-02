#include <stdio.h>

#define SIZE 10

int sum(int * pt,int n);

int main(void)
{
  int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
  int answer;

  answer = sum(marbles,SIZE);

  printf("The total number of marbles is %d\n",answer);
  printf("the size of marbles is %zd bytes.\n",sizeof(marbles));

  return 0;
}

int sum(int * pt,int n)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += *(pt + i);
  }

  printf("the size of marbles is %zd bytes.\n",sizeof(pt));

  return total;
  
}