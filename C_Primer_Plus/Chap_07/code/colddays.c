#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int all_days = 0;
    int cold_days = 0;

    printf("enter the list of daily low temperature\n");
    printf("Use Celeius and enter q to quit;\n");

    while (scanf("%f", &temperature))
    {
        all_days++;
        if (temperature < FREEZING)
        {
            cold_days++;
        }
    }

    if (all_days != 0)
    {
        printf("%d days has %.1f%% days is cold", all_days, 100 * (float)cold_days / all_days);
    }

    if (all_days == 0)
    {
        printf("No data entered.\n");
    }

    return 0;
}