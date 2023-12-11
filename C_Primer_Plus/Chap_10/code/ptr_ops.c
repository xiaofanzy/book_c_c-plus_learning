#include <stdio.h>

int main(void)
{
  int urn[] = {100,200,300,400,500};
  int * ptr1, * ptr2, * ptr3;

  ptr1 = urn;
  printf("*ptr1 = %d, ptr1 = %p, &ptr1 = %p.\n",*ptr1,ptr1, &ptr1);
  printf("ptr1 + 4 = %p,*(ptr1 + 3) = %d.\n", ptr1 + 4,*(ptr1 + 3));
  ptr1++;
  printf("*ptr1 = %d, ptr1 = %p, &ptr1 = %p.\n",*ptr1,ptr1, &ptr1);

  ptr2 = &urn[2];
  ptr2--;
  printf("*ptr2 = %d, ptr2 = %p, &ptr2 = %p.\n",*ptr2, ptr2, &ptr2);
  
  ptr1++;
  ptr2--;

  printf("ptr1 = %p, ptr2 = %p,*ptr1 = %d, *ptr2 = %d\n",ptr1, ptr2,*ptr1, *ptr2);

  printf("%d.\n",ptr1 - ptr2);

  ptr3 = ptr1 + 4;

  printf("ptr3 = %p, and ptr3 -2 = %p.\n",ptr3, ptr3 - 2);

  return 0;
}