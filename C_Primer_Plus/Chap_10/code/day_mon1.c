#include <stdio.h>
#define MOUNTH 12

int main(void)
{

    int days[MOUNTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 30, 31, 31};

    for (int i = 0; i < MOUNTH; i++)
    {
        printf("The %d has %d days.\n", i + 1, days[i]);
    }

    return 0;
}