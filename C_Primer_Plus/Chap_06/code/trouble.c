#include <stdio.h>

int main(void)
{
    int status;
    while (status = 1)
    {
        printf("please enter the next intergr");
        /* 当scanf读取到非需要的值的时候，他会把值放入缓冲区中，然后供下一次读取； */
        scanf("%d", &status);
    }

    return 0;
}