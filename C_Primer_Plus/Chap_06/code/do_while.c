#include <stdio.h>

int main(void)
{
  const int SECRET_NUMBER = 13;
  int choose;

  do
  {
    printf("Please enter the secret code number:\n");
    scanf("%d",&choose);
  } while (choose != SECRET_NUMBER);
  
  printf("Congratulation.\n");

  return 0;
}