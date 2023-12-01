#include <stdio.h>

int main(void)
{
  int day_mounth[] = {30,30,30,30,30,30,30,30,30,30,30,30};

  for (int index = 0; index < sizeof(day_mounth) / sizeof(day_mounth[0]); index++)
  {
    printf("The %d mounth has %d dyas.\n", index+1, day_mounth[index]);
  }

    return 0;
}