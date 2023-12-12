#include <stdio.h>
#include <string.h>

void fit(char * m,unsigned int size);

int main(void)
{
  char mesg[] = "hold on to you hats,hackers. ";

  puts(mesg);
  fit(mesg, 7);
  puts(mesg);
  puts(mesg + 8);
  

  return 0;
}

//我要改那玩意，所以不能用const 限制死
void fit(char * m,unsigned int size)
{
  if (strlen(m) > size)
  {
    *(m + size) = '\0';
  }
  
}