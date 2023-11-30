#include<stdio.h>

int main(void)
{
  int choice;

  printf("Please choose ine of the following:\n");
  printf("1) copy files      2) move files\n");
  printf("3) remove files    4) quit\n");
  printf("Enter the number of your choice: ");

  while((choice = get_choice()) != 4)
  {
    switch(choice)
    {
      case 1: printf("copy files\n"); break;
      case 2: printf("move files\n"); break;
      case 3: printf("remove files\n"); break;
      default: printf("Please enter a number between 1 and 4.\n");
    }
    printf("Enter the number of your choice: ");
  }

}

int get_choice(void)
{
  int ch;

  while(scanf("%d", &ch) != 1)
  {
    while(getchar() != '\n')
      continue;
    printf("Please enter an integer: ");
  }
  while(getchar() != '\n')
    continue;

  return ch;
}