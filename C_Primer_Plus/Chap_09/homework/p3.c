#include <stdio.h>

void getTime(char ch, int n, int m);

int main(void)
{
    char ch;
    int n = 0, m = 0;

    printf("Enter the ch:\n");
    ch = getchar();
    n = 1;
    m = 10;
    getTime(ch, n, m);

    return 0;
}

void getTime(char ch, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}