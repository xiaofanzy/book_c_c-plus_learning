#include <stdio.h>

void copy_arr(const double s1[], double t1[], int n);
void copy_ptr(const double s1[], double *t1, int n);
int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.5, 5.6, 6.7, 7.8};
    double target1[5], target2[5];

    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 3);

    printf("%4.2f  %4.2f  \n", *target1, target2[1]);

    return 0;
}

void copy_arr(const double s1[], double t1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        t1[i] = s1[i];
    }
}

void copy_ptr(const double s1[], double *t1, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(t1 + i) = *(s1 + i + 2);
    }
}