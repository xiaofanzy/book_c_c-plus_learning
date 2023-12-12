#include <stdio.h>

int put2(const char * string);
void put_char(const char * pt);

int main(void)
{
  put_char("If i'd as much money as i cound spend.\n");
  printf("I count %d characters,",put2("I never would cry old chairs to mend"));

  return 0;
}

void put_char(const char * pt)
{
  while (*pt)
  {
    putchar(*pt++);
  }
  
}

void put_arr(const char arr[])
{
  int i = 0;
  while (arr[i])
  {
    putchar(arr[i++]);
  }
  
}

int put2(const char * string)
{
  int count = 0;

  while (*string)
  {
    putchar(*string++);
    count++;
  }
  printf("\n");
  
  return count;

}