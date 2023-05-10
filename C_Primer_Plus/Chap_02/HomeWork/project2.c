#include <stdio.h>

void my_firstfun1(void);
void my_firstfun2(void);

int main(void)
{
    my_firstfun1();
    my_firstfun2();

    return 0;
}

void my_firstfun1(void)
{
    printf("Three blind mice\n");
    printf("Three blind mice\n");
}

void my_firstfun2(void)
{
    printf("See how they run\n");
    printf("See how they run\n");
}