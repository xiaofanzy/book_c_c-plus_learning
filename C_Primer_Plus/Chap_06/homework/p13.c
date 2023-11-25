#include <stdio.h>

#define SIZE 8

int main(void)
{
  int arr[SIZE],arr_1[SIZE];
  int total = 0;

  for (int i = 0; i < SIZE; i++)
  {
    printf("Please enter the %d number:",i+1);
    scanf("%d",&arr[i]);
  }

  for (int i = 0; i < SIZE; i++)
  {
    total += arr[i];
    arr_1[i] = total;
  }

  printf("the arr value is :");
  for (int i = 0; i < SIZE; i++)
  {
    
    printf("%d",arr[i]);
  }
  printf("\n");
  printf("the arr_1 value is :");
  for (int i = 0; i < SIZE; i++)
  {
    
    printf("%5d",arr_1[i]);
  }
  printf("\n");

  
  
  


  return 0;
}