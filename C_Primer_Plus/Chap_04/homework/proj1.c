#include <stdio.h>

int main(void)
{
  char firstName[40],lastName[40];

  printf("Please enter your first name:");
  scanf("%s", firstName);

  printf("Please enter your last name:");
  scanf("%s",lastName);

  printf("%s,%s\n",lastName, firstName);

  return 0;
}