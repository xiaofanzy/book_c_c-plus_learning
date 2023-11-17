#include <stdio.h>
#include <string.h>

int main(void)
{
  char first_char[50],next_char[50];
  scanf("%s %s",first_char,next_char);

  printf("%*s %*s\n",strlen(first_char),first_char,strlen(next_char),next_char);
  printf("%*d %*d\n",strlen(first_char),strlen(first_char),strlen(next_char),strlen(next_char));
  
  return 0;
}