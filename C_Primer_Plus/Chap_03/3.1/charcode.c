#include<stdio.h>

int main(void)
{
  char ch;

  printf("Please enter the code :");
  scanf("%c",&ch);

  printf("Your enter is %c , %d", ch, ch);

  return 0;
}