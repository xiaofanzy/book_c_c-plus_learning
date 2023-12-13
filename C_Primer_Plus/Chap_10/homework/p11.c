#include <stdio.h>

#define YEARS 5
#define MONTHS 12

float show_every_year(int y,int m,const float rain[y][m]);
float show_every_month(int y,int m,const float rain[y][m]);

int main(void)
{
  const float rain[YEARS][MONTHS] =

    {

      {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},

      {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},

      {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},

      {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},

      {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}

    };

  int year,month;

  float subtot = 0.0, total = 0.0;

  subtot = show_every_year(YEARS,MONTHS,rain);
  total = show_every_month(YEARS,MONTHS,rain);

  printf("%.2f.\n",subtot);
  printf("%.2f.\n",total);

  return 0;
}

float show_every_year(int y,int m,const float rain[y][m])
{
  float total = 0.0;

  for (int i = 0; i < y; i++)
  {
    for (int j = 0; j < m; j++)
    {
      total += rain[i][j];
    }
  }
  
  return total;

}

float show_every_month(int y,int m,const float rain[y][m])
{
  float total = 0.0;

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < y; j++)
    {
      total += rain[i][j];
    }
  }
  
  return total;

}