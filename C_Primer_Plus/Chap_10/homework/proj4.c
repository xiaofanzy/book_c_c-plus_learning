#include <stdio.h>

int choose(int *pt, int n);

int main(void)
{
    int max_array[3] = {1, 2, 3};
    int max_value;
    max_value = choose(max_array, 3);
    printf("The max value address is %d\n", max_value);

    return 0;
}

int choose(int *pt, int n)
{
    int max_value = *pt;
    int i;
    int *ptr;
    int index;
    for (i = 1; i < n; i++)
    {
        ptr = max_value > *(pt + i) ? pt : (pt + i);
    }

    return (ptr - pt);
}