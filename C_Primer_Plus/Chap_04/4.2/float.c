#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    // 注意这个4.2 4是指整个的数字加小数点所占的长度，4明显是不够的，所以会扩增为7才能容得下 .2 代表小数点后面保留两位小数;
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3e*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);

    return 0;
}