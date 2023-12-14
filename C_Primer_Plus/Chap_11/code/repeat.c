#include <stdio.h>

int main(int argc,int *argv[])
{
  printf("The command line hs %d arguements:\n",argc);
  printf("Actually, we only has %d arguements.\n",argc -1);

  for (int i = 0; i < argc; i++)
  {
    printf("%d : %s.\n",i, *(argv + i));
  }
  

  return 0;
}