#include <stdio.h>

int main(void)
{
    float inches;

    printf("enter the inches for you:\n");
    scanf("%f", &inches);
    printf("the %f inches = %f miles\n", inches, inches * 2.54);

    return 0;
}