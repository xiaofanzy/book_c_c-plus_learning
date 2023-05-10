#include <stdio.h>

int main(void)
{
    float length, width;
    float area = 0.0f;

    while (scanf("%f", &length) == 1)
    {
        printf("The %.2f length;\n", length);
        printf("enter the width.\n");
        if (scanf("%f", &width) != 1)
        {
            break;
        }
        area = length * width;
        printf("The area is %.2f\n", area);
    }
    printf("The value is invialid.\n");

    return 0;
}