#include <stdio.h>

#define SIZE 2
#define LENGTH 3

void copy_ar(double (*pt)[3], double (*ptr)[3]);

int main(void)
{
    double ar[SIZE][LENGTH] = {{1.1, 2.2}, {1.11, 2.22}};
    double ar_copy[SIZE][LENGTH];

    copy_ar(ar, ar_copy);

    printf("%.2f\n", *ar_copy[1]);

    return 0;
}

void copy_ar(double (*pt)[3], double (*ptr)[3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(ptr + i) + j) = *(*(pt + i) + j);
        }
    }
}