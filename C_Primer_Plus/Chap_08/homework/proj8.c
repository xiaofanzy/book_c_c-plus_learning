#include <stdio.h>

int main(void)
{
    float first_num, sec_num, oth_num;
    int ch;
    int input;

    printf("Enter the operation of your choice:\n");
    printf("a.add\ts.substract\n");
    printf("m.multiply\td.divide\n");
    printf("q.quit.\n");

    while ((ch = getchar()) != 'q')
    {
        printf("Enter first num:");
        while (scanf("%f", &first_num) != 1)
        {
            while ((input = getchar()) != '\n')
            {
                putchar(input);
            }
            printf(" is not a number.\n", first_num);

            printf("Please enter a number ,such as 2.5,-1.78e8,or 3:");
        }

        printf("Enter second num:");
        while (scanf("%f", &sec_num) != 1)
        {
            while ((input = getchar()) != '\n')
            {
                putchar(input);
            }
            printf(" is not a number.\n", sec_num);

            printf("Please enter a number ,such as 2.5,-1.78e8,or 3:");
        }

        switch (ch)
        {
        case 'a':
            printf("%.1f + %.1f = %.1f\n", first_num, sec_num, first_num + sec_num);
            break;
        case 'd':
            printf("%.1f / %.1f = %.2f\n", first_num, sec_num, first_num / sec_num);
            break;
        default:
            printf("enter the rigth chooice.\n");
        }

        printf("Enter the operation of your choice:\n");
        printf("a.add\ts.substract\n");
        printf("m.multiply\td.divide\n");
        printf("q.quit.\n");
        while (getchar() != '\n')
        {
            continue;
        }
    }
    printf("Bye.\n");

    return 0;
}