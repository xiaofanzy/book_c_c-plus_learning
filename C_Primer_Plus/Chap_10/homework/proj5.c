#include <stdio.h>
#define SIZE 2

double get_diff(double *pt, int n);

int main(void)
{
    double values[SIZE] = {1.1, 2.2};

    double diff;

    diff = get_diff(values, SIZE);
    printf("The diff for two value is %.2f", diff);

    return 0;
}

double get_diff(double *pt, int n)
{
    double max, min;

    max = min = *pt;

    for (int i = 1; i < n; i++)
    {
        max = max > *(pt + i) ? max : *(pt + 1);
        min = min < *(pt + i) ? min : *(pt + 1);
    }

    return max - min;
}