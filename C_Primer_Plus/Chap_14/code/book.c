#include <stdio.h>

#define MAXAUTL 31
#define MAXTITLE 41

struct book{
  char title[MAXTITLE];
  char author[MAXAUTL];
  float value;
};

int main(void)
{
  struct book library;
  printf("Please enter the book title.\n");
  gets(library.title);
  printf("Pleaes enter the autor.\n");
  gets(library.author);
  printf("Enter the value.\n");
  scanf("%f", &library.value);

  printf("THe %s book author is %s, and %.2f you can got it.\n",library.title,library.author,library.value);

  return 0;
}