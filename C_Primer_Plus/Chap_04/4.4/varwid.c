#include <stdio.h>

int main(void)
{
    unsigned int width, precision;
    int num = 256;
    float weight = 242.5;

    scanf("%d", &width);
    printf("The number is *%*d*\n", width, num);

    scanf("%d %d", &width, &precision);
    printf("weight =%*.*f\n", width, precision, weight);

    return 0;
}