#include <stdio.h>

int main(void)
{
    float num;

    printf("Please enter the number:\n");
    scanf("%f", &num);
    printf("float style = %f, and exp style is %e", num, num);

    return 0;
}