#include <stdio.h>

#define SIZE 3
#define COLUMN 5

int main(void)
{
  int num_arr[SIZE][COLUMN] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
  int times = 0;
  int i = 0;
  int j = 0;
  int total = 0;
  double avg = 0.0;
  int sumtotal = 0;
  double sum_avg = 0.0;

  int max = num_arr[0][0];

/*   printf("Please enter the 3*5 number.\n");

  while (times <= (SIZE * COLUMN) )
  {
    printf("|");
    scanf("%d",&num_arr[i++][j++]);
    times++;
  } */



  for (i = 0; i < SIZE; i++)
  {
    for (j = 0; j < COLUMN; j++)
    {
      total += num_arr[i][j];
      max = max > num_arr[i][j] ? max : num_arr[i][j];
    }
    sumtotal += total;
    avg = total/COLUMN;
    printf("The num %d avg is %.2f.\n",i+1,(double)total/COLUMN );
  }

  printf("%.2f.\n",(double)sumtotal / (SIZE * COLUMN));
  printf("max is %d",max);
  
  

  return 0;
}