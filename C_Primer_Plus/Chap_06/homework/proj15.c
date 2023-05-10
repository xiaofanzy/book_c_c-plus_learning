#include <stdio.h>

int main(void)
{
    double money_D = 100, money_E = 100;
    int year = 0;
    // do
    // {
    //     money_D += 100.0 * 1.1;
    //     money_E += money_E * 0.05;
    //     year++;
    // } while (money_E <= money_D);
    while (money_E <= money_D)
    {
        money_D += 100.0 * 1.1;
        money_E += money_E * 0.05;
        year++;
    }

    printf("thorws %d years the Daphne monery %.2lf is less then Deirdre's money %.2lf !\n", year, money_D, money_E);

    return 0;
}