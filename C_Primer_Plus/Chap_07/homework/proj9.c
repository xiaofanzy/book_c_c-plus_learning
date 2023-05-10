#include <stdio.h>

int isPrime(int n);

int main(void)
{
    int num;
    int start, i;

    printf("Enter the num:\n");

    while (scanf("%d", &num) == 1)
    {
        for (start = 2; start <= num; start++)
        {
            if (isPrime(start))
            {
                printf("%d\t", start);
            }
        }

        printf("\n");
    }

    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}