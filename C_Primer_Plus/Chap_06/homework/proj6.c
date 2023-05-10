#include <stdio.h>

int main(void)
{
    int max_num, min_num;

    printf("Plsase enter the max num and min num for the list:\n");
    printf("Please enter the max num\n");
    scanf("%d", &max_num);
    printf("Please enter the min num\n");
    scanf("%d", &min_num);

    for (int i = min_num; i <= max_num; i++)
    {
        printf("The %d num sequre = %d,cube = %d\n", i, i * i, i * i * i);
    }

    return 0;
}