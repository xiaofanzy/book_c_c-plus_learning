#include <stdio.h>
#define ROW 3
#define LINE 5

double max_num(int r, int l, double (*pt)[l]);
void avg_num(int r, int l, const double (*pt)[l], double *ptr);

int main(void)
{
    double arr[ROW][LINE];
    double max_nums, aver_nums, total_nums;
    double ave[ROW];

    printf("Please enter the 3*5 doubles\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < LINE; j++)
        {
            printf("Please enter the next value:");
            scanf("%lf", &arr[i][j]);
            printf("%.2f", arr[i][j]);
        }
    }

    avg_num(ROW, LINE, arr, ave);

    for (int i = 0; i < ROW; i++)
    {
        total_nums += ave[i];
    }

    aver_nums = total_nums / ROW;
    printf("c value = %.2f \n", aver_nums);

    max_nums = max_num(ROW, LINE, arr);

    printf("The max value = %.2f", max_nums);

    for (int i = 0; i < ROW; i++)
    {
        printf("b- %.2f \n", ave[i]);
    }
}

void avg_num(int r, int l, const double (*pt)[l], double *ptr)
{
    double total = 0.0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < l; j++)
        {
            total += *(*(pt + i) + j);
        }
        *(ptr + i) = total / l;
        printf("%.2f\n", *(ptr + i));
        total = 0;
    }
}

double max_num(int r, int l, double (*pt)[l])
{
    double max = **pt;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < l; j++)
        {
            max = max > *(*(pt + i) + j) ? max : *(*(pt + i) + j);
        }
    }

    return max;
}
