#include <stdio.h>
#include <math.h>
#define SIZE 8

int main(void)
{
    int num[SIZE];
    int num_size = 0;

    for (int i = 0; i < SIZE; i++)
    {
        num[i] = pow(2, i);
    }

    do
    {
        printf("%d ", num[num_size]);
    } while (++num_size < SIZE);

    return 0;
}