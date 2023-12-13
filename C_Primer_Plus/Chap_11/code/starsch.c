#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

int main(void)
{
  int cnt = 0;
  char *list[LISTSIZE] = {
    "astronomy", "astounding",
    "astrophysics", "ostracize",
    "asterism"
  };

  for (int i = 0; i < LISTSIZE; i++)
  {
      if (strncmp(list[i],"astro",5) == 0)
        {
          printf("Found %s.\n",list[i]);
          cnt++; 
        }
  }
  printf("The list contained %d words beginning with astro.\n",cnt);
  
  

  return 0;
}