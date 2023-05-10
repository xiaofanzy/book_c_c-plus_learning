#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4264967295;

    /* 无符号和有符号打印的时候一个是d,一个是u，    */
    printf("%d, %d, %d\n", i, i + 1, i + 2);
    printf("%u, %u, %u", j, j + 1, j + 2);

    return 0;
}