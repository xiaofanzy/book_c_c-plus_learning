#include <stdio.h>
#define CAHRS 10
#define ROWS 10

int main(void)
{
    for (int j = 0; j < ROWS; j++)
    {
        // 这地方放入i变量就死循环了；MD
        for (char i = 'A'; i < ('A' + CAHRS); i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }

    return 0;
}