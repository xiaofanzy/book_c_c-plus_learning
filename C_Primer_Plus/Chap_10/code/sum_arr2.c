#include <stdio.h>

#define SIZE 10

int sum(int * start,int * end);
int sum_1(int ar[],int n);

int main(void)
{
  int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
  int answer;

  answer = sum(marbles,marbles + SIZE);

  printf("The total number of marbles is %d\n",answer);
  printf("The marbel1 = %d.\n",marbles[0]);
  answer = sum_1(marbles,SIZE);

  printf("The total number of marbles is %d\n",answer);
  printf("The marbel1 = %d.\n",marbles[0]);
  return 0;
}

int sum(int * start,int * end)
{
  int total = 0;
  
 while(start < end)
	total += *start++;

  return total;
  
}

/**
 * 解释一下，为什么使用数组元素自增会影响本身，而使用指针不会，
 * 本质上，数组自增相当于数组本身+1 并赋值给本身，这就导致数组本身变化了。
 * 
 * 而使用指针，本质上指针移动一个位置，只是将指针指向的值往下挪了一个位置而已，对于数组并没有变化。
 * 
*/
int sum_1(int ar[],int n)
{
  int i;
  int total;
  for(i =0;i < n;i++)
    total += ar[i]++;
  
  return total;
  
}
