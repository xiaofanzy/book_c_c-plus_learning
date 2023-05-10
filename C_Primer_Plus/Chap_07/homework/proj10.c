#include <stdio.h>
#define START_PAY1 17850.0
#define START_PAY2 23900.0
#define START_PAY3 29750.0
#define START_PAY4 14875.0
#define START_COST1 0.15
#define START_COST2 0.28

float get_pay(int type, float money);

int main(void)
{
    float money, pay = 0.0f;
    int type;

    printf("enter the type:\n");

    scanf("%d", &type);

    printf("Please enter your money:\n");

    scanf("%f", &money);

    pay = get_pay(type, money);

    printf("the const pay is %.2f", pay);

    return 0;
}

float get_pay(int type, float money)
{
    float pays;
    switch (type)
    {
    case 1:
        pays = money > START_PAY1 ? (money - START_PAY1) * START_COST2 + START_PAY1 * START_COST1 : START_COST1 * money;
        break;
    case 2:
        pays = money > START_PAY2 ? (money - START_PAY2) * START_COST2 + START_PAY2 * START_COST1 : START_COST1 * money;
        break;
    case 3:
        pays = money > START_PAY3 ? (money - START_PAY3) * START_COST2 + START_PAY3 * START_COST1 : START_COST1 * money;
        break;
    default:
        pays = money > START_PAY4 ? (money - START_PAY4) * START_COST2 + START_PAY4 * START_COST1 : START_COST1 * money;
        break;
    }

    return pays;
}