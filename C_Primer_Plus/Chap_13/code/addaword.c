#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(int argc,char *argv[])
{
  FILE *pt;
  char word[MAX];

  if((pt = fopen("word","a+")) == NULL)
  {
    fprintf(stdout,"can't open \"word\" files.\n");
    exit(1);
  }

  puts("Enter words to add the file press the enter");
  puts("Key at the beginning of line to terminate.");
  while (gets(word) != NULL && word[0] != '\0')
  {
    fprintf(pt,"%s",word);
  }

  puts("FIle contents");
  rewind(pt);

  while (fscanf(pt,"%s",word) == 1)
  {
    puts(word);
  }

  if (fclose(pt) != 0)
  {
    fprintf(stderr,"Error closing file.\n");
  }
  
  return 0;
}
