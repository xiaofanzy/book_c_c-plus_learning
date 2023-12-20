#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main(void)
{
  char file[SIZE];
  FILE *fp;
  char ch;

  puts("Enter the name of file to be processed:");
  gets(file);

  if ((fp = fopen(file,"r")) != NULL)
  {
    printf("reverse can't open %s.\n", file);
		exit(1);
  }

  fseek(fp,0L,SEEK_END);
  int len = ftell(fp);

  for (int i = 1; i <= len; i++)
  {
    fseek(fp,-i,SEEK_END);
    ch = getc(fp);
    putchar(ch);
  }

  putchar('\n');
  

  return 0;
}