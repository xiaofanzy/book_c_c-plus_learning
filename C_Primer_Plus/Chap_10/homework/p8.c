#include <stdio.h>

#define ROW 3
#define COL 5

void copy_arr(int r,int c,const double pt[r][c],double p[r][c]);
void show_arr(int c,int size,const double arr[size][c],const double (*pt)[c]);

int main(void)
{
  double array[3][5] = {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0, 12.0, 13.0, 14.0, 15.0}
    };
  double pt[ROW][COL];

  int size = sizeof(array) / sizeof(array[0]);
  
  copy_arr(ROW,COL,array,pt);

  show_arr(COL,size,array,pt);

  return 0;
}

void copy_arr(int r,int c,const double pt[r][c],double p[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      p[i][j] = pt[i][j];
    }
  }
  
}

void show_arr(int c,int size,const double arr[size][c],const double (*pt)[c])
{

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("The arr %d value is %.2f.\n",j + 1,arr[i][j]);
      printf("The pt %d value is %.2f.\n",j + 1,pt[i][j]);
    }
    
  }
  

}