#include <stdio.h>
#include <string.h>

#define WORDS "beast"
#define SIZE 40

int main(void)
{
  char *orig = WORDS;
  char copy[SIZE] = "Be the best that you can be.";

  char *ps;

  puts(orig);
  puts(copy);
  strcpy(orig + 7, copy);
  puts(orig);


  return 0;
}