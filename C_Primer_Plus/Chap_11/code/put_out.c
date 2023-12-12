#include <stdio.h>

#define DEF "I was i #defined string"
int main(void)
{
  char str1[80] ="An array was initialized to me.";
  const char * str2 = "A pointer was initialized to me";

  puts(str1);
  puts(str2);
  puts(&str1[5]);
  puts(str2 + 4);
  puts("I was a humous man.");
  puts(DEF);

  return 0;
}