#include <stdio.h>

#define ROW 3
#define LEN 5

void two(int r, int l, int ar[r][l]);
void show(int r, int l, int ar[r][l]);

int main(void)
{
    int arr[ROW][LEN] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {12, 13, 14, 15, 16}};

    show(ROW, LEN, arr);

    two(ROW, LEN, arr);

    show(ROW, LEN, arr);

    return 0;
}

void show(int r, int l, int ar[r][l])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

void two(int r, int l, int ar[r][l])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < l; j++)
        {
            *(*(ar + i) + j) *= 2;
        }
    }
}