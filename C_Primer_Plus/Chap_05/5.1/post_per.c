#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, aplus, bplus;

    aplus = a++;
    bplus = ++b;

    printf("a,b,aplus,bplus\n");
    printf("%d,%d,%d,%d", a, b, aplus, bplus);

    return 0;
}