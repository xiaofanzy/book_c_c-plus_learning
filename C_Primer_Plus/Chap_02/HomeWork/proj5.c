#include <stdio.h>

int main(void)
{
    int tones, tone_add, tone_square;

    tones = 10;
    tone_add = tones + tones;
    tone_square = tones * tones;

    printf("The tones is %d\n", tones);
    printf("The tone_add is %d\n", tone_add);
    printf("The tone_square is %d\n", tone_square);

    return 0;
}