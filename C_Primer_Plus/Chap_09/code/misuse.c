#include <stdio.h>
int imax(int n, int m);
int main(void)
{
    /* 直接报错了 */
    // printf("%d = %d", imax(3));

    return 0;
}

int imax(int n, int m)
{
    return n > m ? n : m;
}