#include <stdio.h>
#define FEET_PER_INC 2.54;
#define INCH_PER_FEET 12;
int main(void)
{
    double height, inches, feet;
    printf("Please enter a height in centimeters:\n");
    scanf("%f", &height);

    while (height > 0)
    {
        inches = height / FEET_PER_INC;
        feet = (int)inches / INCH_PER_FEET;
        printf("%.1f cm = %.0f feet, %.1f inches.\n", height, feet, inches);

        printf("Enter a height in centimeters:\n");
        scanf("%f", &height);
    }

    return 0;
}