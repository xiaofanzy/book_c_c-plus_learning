#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 81
char showmenu(void);
void eatline(void);
void ToUppers(char *pt);
void ToLower(char *pt);
void Transpose(char *pt);
void Dummy(char *pt);
void show(void (* pt)(), char * c);

int main(void)
{
  char line[LEN];
  char copy[LEN];
  void (*pt)(char *);
  char choice;

  puts("Enter a string (empty to quit.):");

  while (gets(line) != NULL && line[0] != '\0')
  {
    while ((choice = showmenu()) != 'n')
    {
      switch (choice)
      {
      case 'u':
        pt = ToUppers;
        break;
      case 'l':
        pt = ToLower;
        break;
      case 't':
        pt = Transpose;
        break;
      case 'o':
        pt = Dummy;
        break;
      default:
        break;
      }

      strcpy(copy,line);
      show(pt,copy);
    }
    puts("Enter a string (empty to quit.):");
  }
  puts("Bye.");
  return 0;
}

char showmenu(void)
{
  char ans;
  puts("ulto is right.others is error");
  ans = getchar();
  tolower(ans);
  eatline();
  while (strchr("ulton",ans) == NULL)
  {
    puts("again");
    ans = tolower(getchar());
    eatline();
  }

  return ans;
}

void eatline(void)
{
  while (getchar() != '\n')
  {
    continue;
  }
  
}

void ToUppers(char *pt)
{
  while (*pt)
  {
    *pt = toupper(*pt);
    pt++;
  }
}

void ToLower(char *pt)
{
  while (*pt)
  {
    *pt = tolower(*pt);
    pt++;
  }
  
}

void Transpose(char *pt)
{
  while (*pt)
  {
    if (islower(*pt))
    {
      *pt = toupper(*pt);
    }
    else
    {
      *pt = tolower(*pt);
    }
    pt++;   
  }

}

void Dummy(char *pt)
{

}

void show(void (* pt)(), char * c)
{
  (*pt)(c);

  puts(c);
}

