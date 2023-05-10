#include <stdio.h>
#define SIZE 4

int main(void)
{
    int data[SIZE] = {1, 2};

    printf("%2s%14s\n", "i", "date[i]");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%2d%14d\n", i, data[i]);
    }

    return 0;
}