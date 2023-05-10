#include <stdio.h>

int main(void)
{
    double money = 1000000;
    int years = 0;

    while (money >= 0)
    {
        money += money * 0.08;
        money -= 100000;
        years++;
    }

    printf("Throws %d years ,money is null.\n", years);

    return 0;
}