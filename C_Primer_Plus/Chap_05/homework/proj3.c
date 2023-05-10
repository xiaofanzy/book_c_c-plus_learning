#include <stdio.h>
#define DAY_PER_WEEK 7;

int main(void)
{
    int days, weeks, left;
    printf("Please enter the value for you:\n");
    scanf("%d", &days);

    weeks = days / DAY_PER_WEEK;
    left = days % DAY_PER_WEEK;

    printf("The %d days = %d weeks and %d days", days, weeks, left);

    return 0;
}