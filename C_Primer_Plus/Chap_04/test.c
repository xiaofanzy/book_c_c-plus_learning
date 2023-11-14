#include <stdio.h>

int main(void)
{
  char ch;

  printf("Please enter char:");
  // skip whitespace 就是跳过空格
  scanf(" %c",&ch);
 
  printf("%c", ch);

  return 0;
}