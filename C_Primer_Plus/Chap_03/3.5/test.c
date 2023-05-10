#include <stdio.h>

int main(void)
{
    /* 精度丢失问题 */
    int num1 = 12.99;
    float num2 = 3.1415926535;

    printf("num1 = %d\n", num1);
    printf("num2 = %f\n", num2);

    return 0;
}