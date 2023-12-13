#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIEZE 13

int main(void)
{
  char flower[SIZE];
  char addon[] = "s smell like old shoes.";
  char bugs[BUGSIEZE];
  int avaliable;

  puts("What's your favorate flower?");
  gets(flower);

  if ((SIZE - strlen(addon) - 1 - strlen(flower)) >= 0)
  {
    strcat(flower,addon);
  }
  
  puts(flower);

  puts("What's your favorite bug?");
  gets(bugs);

  avaliable = BUGSIEZE - strlen(bugs) - 1;

  // 第三个参数代表可以追加的最大字符数
  strncat(bugs,addon,avaliable);

  puts(bugs);
  

  return 0;
}