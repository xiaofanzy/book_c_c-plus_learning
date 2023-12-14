#include <stdio.h>
#include <string.h>

#define SIZE 4
#define LIM 5

int main(void)
{
  char qwords[LIM][SIZE];
  char temp[SIZE];

  int i = 0;

  printf("Enter %d words beginning with q.\n",LIM);

  while (i < LIM && gets(temp))
  {
    if (temp[0] != 'q')
    {
      printf("%s doesn't begin with q!.\n",temp);
    }
    else
    {
      strncat(qwords[i],temp,SIZE - 1);
      qwords[i][SIZE - 1] = '\0';
      i++;
    }
  }

  puts("Here are the words you entered");
  for (int j = 0; j < LIM; j++)
  {
    puts(qwords[j]);
  }

  return 0;
}