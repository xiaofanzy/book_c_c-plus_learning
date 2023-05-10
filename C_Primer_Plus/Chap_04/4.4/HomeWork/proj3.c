#include <stdio.h>

int main(void)
{
    float num = 21.3, num1 = 21.29;

    printf("The input is %3.1f or %2.1e\n", num, num);
    printf("The input is %+5.3f or %4.3E\n", num1, num1);

    return 0;
}