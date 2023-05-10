#include <stdio.h>
#define SIZE 10

int sum(int *pt, int size);

int main(void)
{
    int marbles[SIZE] = {20,
                         10,
                         5,
                         39,
                         4,
                         16,
                         19,
                         26,
                         31,
                         20};

    long answer;
    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marble is %zd bytes.\n", sizeof marbles);

    return 0;
}

int sum(int *pt, int size)
{
    int total = 0;
    printf("The size of pt is %zd\n", sizeof pt);

    for (int i = 0; i < size; i++)
    {
        total += *pt;
    }

    return total;
}
