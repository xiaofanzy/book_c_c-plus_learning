#include <stdio.h>

void show_arr(int col,int l,int pt[col][l]);
void double_arr(int (*pt)[5],int size);

int main(void)
{
  int matrix[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

  show_arr(3,5,matrix);
  double_arr(matrix,3);
  show_arr(3,5,matrix);

  return 0;
}

void show_arr(int col,int l,int pt[col][l])
{
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < l; j++)
    {
      printf("%6d",pt[i][j]);
    }
    puts("\n");
  }
  
}

void double_arr(int (*pt)[5],int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      *(*(pt + i) + j) *=2;
    }
    
  }
  
}

