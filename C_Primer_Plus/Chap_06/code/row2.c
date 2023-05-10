#include <stdio.h>

int main(void)
{
    const int CAHRS = 10;
    const int ROWS = 10;

    for (int row = 0; row < ROWS; row++)
    {
        for (int chars = 'A' + row; chars < 'A' + CAHRS; chars++)
        {
            printf("%c", chars);
        }
        printf("\n");
    }

    return 0;
}