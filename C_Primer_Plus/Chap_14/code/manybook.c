#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 41
#define MAXBKS 100

struct book{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void)
{

  struct book library[MAXBKS];
  int i = 0;

  printf("Please enter the book title:");

  while (i < MAXBKS && gets(library[i].title) != NULL && library[i].title[0] != '\0')
  {
    printf("Now enter the author: ");
    gets(library[i].author);
    printf("Enter the value:");
    scanf("%f",&library[i++].value);

    while (getchar() != '\n');
    printf("Please enter the next title:");
  }

  if (i > 0)
  {
    printf("Here are the list of your book:\n");
    for (int j = 0; j < i; j++)
    {
      printf("%s by %s : $%.2f.\n",
      library[j].title,library[j].author,library[j].value);
    }
    
  }
  
  return 0;
}