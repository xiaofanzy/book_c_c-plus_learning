#include <stdio.h>
#include <math.h>

int main(void)
{
    const double ANSWER = 3.1415926;
    double response;
    printf("Please enter the number for this:\n");
    // 注意，这个不能放在fabs里面，因为scanf 返回的是执行的个数，而不是response的值；
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.001)
    {
        printf("try again!");
        scanf("%lf", &response);
    }
    printf("Colse enouth!");

    return 0;
}