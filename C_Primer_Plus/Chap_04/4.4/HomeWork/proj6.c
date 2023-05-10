#include <stdio.h>
#include <float.h>

int main(void)
{
    double num1 = 1.0 / 3.0;
    float num2 = 1.0 / 3.0;

    printf("%0.4f\n", num1);
    printf("%0.12f\n", num2);
    printf("%0.2f\n", num2);
    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);

    return 0;
}