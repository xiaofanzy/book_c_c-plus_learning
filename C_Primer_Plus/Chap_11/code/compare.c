#include <stdio.h>
#include <string.h>

#define MAX 40
#define GRANT "GRANT"

int main(void)
{
  char try[MAX];

  gets(try);

  while (strcmp(try,GRANT))
  {
    puts("No,that's wrong ,try again.");
    gets(try);
  }
  
  puts("That's right");


  return 0;
}