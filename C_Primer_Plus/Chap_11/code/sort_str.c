#include <stdio.h>
#include <string.h>

#define LIM 20
#define SIZE 81

void ststr(char *string[],int size);

int main(void)
{
  
  char input[LIM][SIZE];
  char *pstr[LIM];
  int cnt = 0;
  
  printf("input up to %d lines, and I will sort them.\n", LIM);
  printf("To stop, press the Enter key at a line's start.\n");

  while (cnt < LIM && gets(input[cnt]) != NULL && input[cnt][0] != '\0')
  {
    pstr[cnt] = input[cnt];
    cnt++;
  }

  ststr(pstr,cnt);
  puts("Here the sorted list");
  for (int i = 0; i < cnt; i++)
  {
    puts(pstr[i]);
  }
  
  return 0;
}

void ststr(char *string[],int size)
{
  char *temp;

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (strcmp(string[i],string[j]) > 0)
      {
        temp = string[j];
        string[i] = string[j];
        string[i] = temp;
      }
      
    }
    
  }
  


}

