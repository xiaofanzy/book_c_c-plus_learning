#include <Stdio.h>

void print_smile(void);

int main(void)
{
    print_smile();
    print_smile();
    print_smile();
    printf("\n");

    print_smile();
    print_smile();
    printf("\n");

    print_smile();

    return 0;
}

void print_smile(void)
{
    printf("smile!");
}