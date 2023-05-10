#include <stdio.h>
#include <stdbool.h>

int get_limit(void);
bool bad_limits(int start, int stop, int upper, int lower);
int sum_squares(int start, int end);

int main(void)
{
    const int MAX = 1000;
    const int MIN = -1000;

    int start, stop, answer;

    printf("Enter the limits number.\n");
    start = get_limit();
    printf("Enter the high number.\n");
    stop = get_limit();

    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MAX, MIN))
        {
            printf("wrong!\n");
        }
        else
        {
            answer = sum_squares(start, stop);
        }
        printf("The total is %d\n", answer);
        printf("again . Enter the limits number.\n");
        start = get_limit();
        printf("Enter the high number.\n");
        stop = get_limit();
    }
    printf("bye");

    return 0;
}

int get_limit(void)
{
    int number;
    char ch;

    while (scanf("%d", &number) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            continue;
        }
    }

    return number;
}

bool bad_limits(int start, int stop, int upper, int lower)
{
    bool return_falg = false;

    if (start > stop)
    {
        printf("The start value %d is bigger than %d\n", start, stop);
        return_falg = true;
    }
    else if (start < lower || stop < lower)
    {
        printf("Values must be %d or greater.\n", lower);
        return_falg = true;
    }
    else if (stop > upper || start > upper)
    {
        printf("value must be %d or less .\n", upper);
        return_falg = true;
    }

    return return_falg;
}

int sum_squares(int start, int end)
{
    int result;

    for (int i = start; i < end; i++)
    {
        result += start * start;
    }

    return result;
}