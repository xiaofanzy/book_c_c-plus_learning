#include <stdio.h>

int main(void)
{
    int num;

    for (int num = 0; num < 7; num++)
    {
        printf("%d %d\n", num, num * num * num);
    }

    return 0;
}