#include <stdio.h>

int main(void)
{
    double array[8], array_last[8];
    double sum;

    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &array[i]);
    }

    array_last[0] = array[0];
    for (int j = 1; j < 8; j++)
    {
        array_last[j] = array_last[j - 1] + array[j];
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%.2lf ", array_last[i]);
    }

    return 0;
}