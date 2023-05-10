#include <stdio.h>

void mikato(int bah);

int main(void)
{

    int pooh = 10, bah = 10;
    printf("1 pooh = %p\n", &pooh);
    printf("1 bah = %p\n", &bah);
    mikato(bah);
}

void mikato(int bah)
{
    int pooh = 10;
    printf("2 pooh = %p", &pooh);
    printf("2 bah = %p", &bah);
}