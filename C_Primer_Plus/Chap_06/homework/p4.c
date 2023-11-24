#include <stdio.h>

int main(void)
{
  char ch = 'E';
  int index,index_j,index_l;
  int length = 0;
  char chs[ch - 'A'];

  for(index = 0;index<= ch - 'A';index++)
    chs[index] = 'A' + index;

  for(index = 0;index <= ch - 'A';index++)
  {
    for(index_j = ch - 'A';index_j > index ;index_j--)
      printf(" ");
    
    for(index_l =0 ;index_l <=index;index_l++)
      printf("%c",'A' + index_l);

    for(index_l =index - 1 ;index_l >= 0;index_l--)
      printf("%c",'A' + index_l);
    
    printf("\n");
    
  }

 

  return 0;
}