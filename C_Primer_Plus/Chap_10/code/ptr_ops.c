#include <stdio.h>

int main(void)
{
  int urn[] = {100,200,300};
  int * ptr1;

  ptr1 = urn;
  printf("*ptr1 = %d, ptr1 = %p, &ptr1 = %p",*ptr1,ptr1, &ptr1);


  return 0;
}