#include <stdio.h>

/* 这玩意不能加分号，加完分号拿不到值了 */
#define KEL_PER_FAR 273.16
#define CEL_PER_FAH 32.0
#define CEL_PER_HEIT 1.8

void Temperatures(double t);

int main(void)
{
    double temp;

    printf("Enter the temp for now:");
    while (scanf("%lf", &temp))
    {
        Temperatures(temp);
        printf("plase enter the next value:");
    };

    return 0;
}

void Temperatures(double t)
{
    double Cels, Kelv;
    Cels = t * CEL_PER_HEIT + CEL_PER_FAH;
    Kelv = Cels + KEL_PER_FAR;

    printf("The %.2f temp = %.2f Celsius and = %.2f Kelvin.\n", t, Cels, Kelv);
}