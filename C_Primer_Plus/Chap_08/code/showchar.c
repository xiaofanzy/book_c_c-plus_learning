#include <stdio.h>

void display(char c, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;

    printf("Enter a char and two integer:\n");

    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
        {
            printf("it only can use two integer.\n");
            continue;
        }
        display(ch, rows, cols);

        while (getchar() != '\n')
        {
            continue;
        }

        printf("enter anothers.\n");
    }
    printf("bye!\n");

    return 0;
}

void display(char c, int lines, int width)
{
    int rows, cols;

    for (rows = 1; rows <= lines; rows++)
    {
        for (cols = 1; cols <= width; cols++)
            printf("%c", c);
        printf("\n");
    }
}