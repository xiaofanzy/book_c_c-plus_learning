#include <stdio.h>
#include <string.h>

#define SIZE 81
#define COLUMN 100

#define STOP "quit"

int main(void)
{
  char input[SIZE][COLUMN];
  int cnt = 0;

  while (cnt < SIZE && gets(input[cnt]) && strcmp(input[cnt],STOP))
  {
    cnt++;
  }
  
  printf("%d strings entered.\n",cnt);

  return 0;
}