#include <stdio.h>
#define ARTICHOKE 1.25
#define BEET 0.65
#define ROBBROT 0.89
#define DISCOUNT 0.05
#define TRANS 3.5
#define TRANS_1 10.00
#define TRANS_2 0.1
#define START_TRANS 8.0

// TODO
int main(void)
{
    float pay_pound = 0.0f;
    float pound, pound_total = 0.0f;
    float pay_artichoke = 0.0f, pay_beet = 0.0f, pay_robbrot = 0.0f;
    char type;

    printf("Please enter the type for choose vegetable:\n");

    while ((type = getchar()) != 'q')
    {
        pound = getPound();

        switch (type)
        {
        case 'a':
            pay_artichoke += getPay(pound);
            break;
        case 'b':
            pay_beet += getPay(pound);
            break;
        default:
            pay_robbrot += getPay(pound);
            break;
        }

        printf("The average pound  of %s cost %.2f money and order %.2f pound and cost %.2f monery");
    }

    return 0;
}