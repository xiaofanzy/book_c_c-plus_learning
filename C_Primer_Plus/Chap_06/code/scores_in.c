#include <stdio.h>

#define SIZE 10

int main(void)
{
  int score[SIZE];
  int index;
  int sum = 0;
  float average;

  printf("Please enter %d times score:\n",SIZE);
  for(index = 0;index < SIZE;index++)
      scanf("%d", &score[index]);

  for(index = 0;index < SIZE;index++) 
      sum += score[index];

  average = sum / SIZE;

  printf("the total score is: %d and average score is %.2f",sum,average);


  return 0;
}