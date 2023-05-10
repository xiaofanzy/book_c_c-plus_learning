#include <stdio.h>

int main(void)
{

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 30, 31, 31};

    // sizeof(days)  总字节数 sizeof(days[0]) 一个元素占用的字节
    for (int i = 0; i < sizeof(days) / sizeof(days[0]); i++)
    {
        printf("The %d has %d days.\n", i + 1, days[i]);
    }

    return 0;
}