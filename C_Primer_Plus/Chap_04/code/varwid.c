#include <stdio.h>

int main(void)
{
  int width,precession;
  int number = 256;
  double weight = 242.5;

  printf("Please enter the width:");
  scanf("%d", &width);
  printf("you weigth is *%*d*\n",width, number);

  printf("Please enter the width and precession.\n");
  scanf("%d %d", &width, &precession);
  printf("Your double weight is *%*.*f*\n",width,precession,weight);


  return 0;
}