#include <stdio.h>
#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short *pti;
    double bills[SIZE];
    double *ptf;

    pti = dates;
    ptf = bills;

    for (int i = 0; i < SIZE; i++)
    {
        printf("pointer + %d = %p %p\n", i, dates + i, &bills[i]);
    }

    return 0;
}