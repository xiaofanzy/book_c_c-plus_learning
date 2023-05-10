#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'c';
    printf("ch =%c, i = %d, fl = %.2f\n", ch, i, fl);
    ch = ch++;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch =%c, i = %d, fl = %.2f\n", ch, i, fl);

    ch = 5212205;
    printf("ch = %c", ch);

    return 0;
}