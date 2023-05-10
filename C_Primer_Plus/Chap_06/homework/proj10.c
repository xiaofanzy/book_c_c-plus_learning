#include <stdio.h>

#define SIZE 8

int main(void)
{
    int number[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }

    return 0;
}