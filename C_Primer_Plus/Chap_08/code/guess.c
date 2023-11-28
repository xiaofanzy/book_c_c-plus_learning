#include <stdio.h>

int main(void)
{
  int guess = 1;
  char ch;

  printf("is your number? %d\n",guess);

  while ((ch = getchar()) != 'y')
  {
    if (ch == 'n')
    {
      printf("Well then is it %d?\n",++guess);
    }
    else
    {
      printf("Sorry i understand only y or n.\n");
    }
    

    while (getchar() != '\n');
    
  }

  printf("I knew i cound do it.\n");
  


  return 0;
}