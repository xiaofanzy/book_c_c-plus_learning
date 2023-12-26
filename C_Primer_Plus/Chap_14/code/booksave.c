#include <stdio.h>
#include <stdlib.h>

#define MAXTITL 40
#define MAXAUTL 40

#define MAXBKS 10

struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void)
{
  FILE *pbooks;
  struct book library[MAXBKS];
  int count = 0;
  int filecount = 0;

  if ((pbooks = fopen("book.bat","a+b")) == NULL)
  {
    puts("can not open book.bat.\n");
    exit(EXIT_FAILURE);
  }
  
  rewind(pbooks);

  while (count < MAXBKS && fread(&library[count],sizeof(struct book),1,pbooks) == 1)
  {
    if (count == 0)
    {
      puts("Current contents of book.bat:");
    }

    printf("%s by %s :$%.2f.\n",library[count].title,library[count].author,library[count++].value);
    
  }
  
  filecount = count;

  if (count == MAXBKS)
  {
    puts("The book.bat file is full.");
    exit(EXIT_FAILURE);
  }

  puts("Please add new book title. Press [enter] at the start of a line to stop.");

  while (count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0')
  {
    puts("Now enter the author:");
    gets(library[count].author);
    puts("Now enter the value:");
    scanf("%f",&library[count++].value);

    while (getchar() != '\n')
    {
      continue;
    }

    if (count < MAXBKS)
    {
      puts("enter the next title");
    }
    
  }
  
  if (count > 0)
  {
    puts("Here is your books:");
    for (int i = 0; i < count; i++)
    {
      printf("%s by %s $%.2f.\n",library[i].title,library[i].author,library[i].value);
    }

    fwrite(&library[filecount],sizeof(struct book),count - filecount,pbooks);
  }
  else
  {
    puts("No books? too bad");
  }

  puts("Bye.\n");
  fclose(pbooks);
  
  return 0;
}