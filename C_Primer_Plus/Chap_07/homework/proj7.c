#include <stdio.h>

int main(void)
{
    const float BAISE = 10.00f;
    const float ADD_SIZE = 1.5;
    const float rate_1 = 0.15;
    const float rate_2 = 0.20;
    const float rate_3 = 0.25;

    float hours, rates = 0.0f, salary = 0.0f, salary_total;

    printf("Enter the hour for you work time;\n");

    while (scanf("%f", &hours) == 1)
    {
        if (hours <= 40)
        {
            salary_total = BAISE * hours;
        }
        else if (hours > 40)
        {
            salary_total = BAISE * 40 + ADD_SIZE * (hours - 40) * BAISE;
        }

        if (salary_total <= 300)
        {
            rates = salary_total * rate_1;
        }
        else if (salary_total <= 450)
        {
            rates = 300 * rate_1 + (salary_total - 300) * rate_2;
        }
        else
        {
            rates = 300 * rate_1 + 150 * rate_2 + (salary_total - 450) * rate_3;
        }

        salary = salary_total - rates;

        printf("The salary_total is %.2f and %.2f rates, and salary is %.2f\n", salary_total, rates, salary);
    }

    return 0;
}