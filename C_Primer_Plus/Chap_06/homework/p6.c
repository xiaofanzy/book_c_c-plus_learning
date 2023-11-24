#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(void)
{
  char character[SIZE];
  int index, index_last;

  printf("please enter the code:");

  scanf("%s",character);

  for(index_last = strlen(character); index_last >=0;index_last--)
    printf("%c",character[index_last]);

  return 0;
}