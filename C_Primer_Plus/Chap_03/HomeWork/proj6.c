#include <stdio.h>

int main(void)
{
    float mess = 3.156e7;
    float mess_quart = 950;
    float quart;

    printf("please enter the quarts for you:\n");
    scanf("%f", &quart);
    printf("your enter the %f quarts = %f mess_quarts and = %e mess", quart, quart * mess_quart, quart * mess_quart / mess);

    return 0;
}