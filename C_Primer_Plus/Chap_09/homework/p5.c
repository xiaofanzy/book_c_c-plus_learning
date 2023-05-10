#include <stdio.h>
void large_of(double *u, double *v);

int main(void)
{
    double n1, n2;

    printf("Enter two number:\n");
    scanf("%lf%lf", &n1, &n2);
    printf("first: %.2lf %.2lf", n1, n2);

    large_of(&n1, &n2);
    printf("now: %.2lf %.2lf", n1, n2);

    return 0;
}

void large_of(double *u, double *v)
{
    *u = *v = *u > *v ? *u : *v;
}