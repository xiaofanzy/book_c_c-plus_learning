#include <stdio.h>
#define SIZE 5

void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);

int main(void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.220};
    show_array(dip, SIZE);
    mult_array(dip, SIZE, 2.5);
    show_array(dip, SIZE);

    return 0;
}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%8.3f", ar[i]);
    }
    printf("\n");
}

void mult_array(double ar[], int n, double mult)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] *= mult;
    }
}