#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    int i, j;
    char ch;
    printf("enter ch;\n");
    ch = getchar();
    printf("Enter the two num:\n");
    scanf("%d%d", &i, &j);
    chline(ch, i, j);
    return 0;
}

void chline(char ch, int i, int j)
{
    int k = 0;

    while (k++ < i)
    {
        printf(" ");
    }
    while (k++ <= j)
    {
        printf("%c", ch);
    }
    printf("\n");
}