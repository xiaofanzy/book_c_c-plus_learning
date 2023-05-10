#include <stdio.h>
#define S_PER_M 60;
#define M_PER_K 0.62137
#define S_PER_H 3600

int main(void)
{
    double distk, distm;
    double rate;
    int min, sec, time;
    double mtime;
    int mmin, msec;

    printf("This program convers your time for a metric race.\n");
    printf("to a time for running a mile and you average.\n");
    printf("speed in miles per hour.\n");
    printf("please enter in kiommeters the distance run.\n");
    scanf("%lf", &distk);

    printf("Next enter the time in minuters and seconds\n");
    scanf("%d", &min);
    printf("now enter the seconds.\n");
    scanf("%d", &sec);

    time = min * S_PER_M + sec;
    distm = distk * M_PER_K;
    rate = distm / time * S_PER_H;

    mtime = (double)time / distm;
    mmin = (int)mtime / S_PER_M;
    msec = (int)mtime / S_PER_M;

    /* 后面的不写了 */

    return 0;
}