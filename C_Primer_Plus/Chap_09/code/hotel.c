#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code;
    int status;

    printf("%s\n", STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms	2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza	4) The Stockton\n");
    printf("5) Quit\n");
    printf("%s\n", STARS);

    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
            scanf("%*s");
        printf("Enter an integer from 1 to 5.\n");
    }

    return code;
}

int getnights(void)
{
    int choose;
    int status;

    printf("enter the nigths you live.\n");
    while ((status = scanf("%d", &choose)) != 1)
    {
        scanf("%*s");
        printf("Please enter the right number;\n");
    }

    return choose;
}

void showprice(double hotel_rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n < nights; n++, factor *= DISTINCT)
    {
        total += hotel_rate * DISTINCT;
    }

    printf("You should pay %.2lf monery for me.\n", total);
}
