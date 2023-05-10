#include <stdio.h>

int fib(int m);

int main(void)
{

    int mounth, rabbits;
    printf("enter the mounth for this year:\n");

    scanf("%d", &mounth);

    rabbits = fib(mounth);

    printf("The total rabbits = %d\n", rabbits);

    return 0;
}

int fib(int m)
{
    if (m <= 2)
    {
        return 1;
    }
    else
    {
        return fib(m - 1) + fib(m - 2);
    }
}
