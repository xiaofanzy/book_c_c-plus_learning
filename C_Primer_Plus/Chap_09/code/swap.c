#include <stdio.h>

void swap(int *u, int *v);

int main(void)
{
    int x = 5, y = 10;

    printf("x = %d and y = %d\n", x, y);
    swap(&x, &y);
    printf("Now x = %d and y = %d", x, y);

    return 0;
}

void swap(int *u, int *v)
{
    int temp;
    temp = *v;
    *v = *u;
    *u = temp;
}