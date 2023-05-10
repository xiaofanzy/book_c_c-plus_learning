#include <stdio.h>
#define COVERAGE 200

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter the number of square feet to be painted:\n");

    while (scanf("%d", &sq_feet))
    {
        cans = sq_feet / COVERAGE == 0 ? sq_feet / COVERAGE : (sq_feet / COVERAGE) + 1;
        printf("you need %d %s of paint \n", cans, (cans == 1) ? "can" : "cans");
        printf("next value:\n");
    }

    return 0;
}