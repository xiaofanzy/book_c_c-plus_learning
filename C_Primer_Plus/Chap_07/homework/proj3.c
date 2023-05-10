#include <stdio.h>
int main(void)
{
    int num, odd_size = 0, even_size = 0;
    int odd_total = 0;
    int even_total = 0;

    printf("Enter the num:\n");

    // while (1)
    // {
    //     scanf("%d", &num);
    //     // 这种方式也可以
    //     if (num == 0)
    //         break;
    // }

    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 != 0)
        {
            odd_size++;
            odd_total += num;
        }
        else
        {
            even_size++;
            even_total += num;
        }
    }

    if (odd_size != 0 && even_size != 0)
        printf("total %d total has %d even number and average is %.2f, %d odd number and average is %.2f\n", odd_size + even_size, even_size, (double)even_total / even_size, odd_size, (double)odd_total / odd_size);
    else
        printf("......");
    printf("    bye!\n");

    return 0;
}