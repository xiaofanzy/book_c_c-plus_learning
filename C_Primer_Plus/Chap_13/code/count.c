#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  FILE *fp;
  int ch;
  int count = 0;

  if (argc != 2)
  {
    printf("roung.\n");
    exit(1);
  }

  if ((fp = fopen(argv[1],"r")) == NULL)
  {
    printf("can't open files.\n");
    exit(1);
  }

  while ((ch = getc(fp)) != EOF)
  {
    putc(ch,stdout);
    count++;
  }

  printf("%d characters.\n",count);
  
  
  


}