#include <stdio.h>
#define S_PER_M 60
#define S_PER_H 60
#define M_PER_K 0.62137

int main(void)
{
  double distk, distm; // distance run in km and in miles
  int min,sec;
  int mmin,msec;
  double rate;

  printf("This program converts your time for a metric race\n");
  printf("to a time for running a mile and to your average\n");
  printf("speed in miles per hour.\n");
  printf("Please enter, in kilometers, the distance run.\n");
  scanf("%lf", &distk); // %lf for type double
  printf("Next enter the time in minutes and seconds.\n");
  printf("Begin by entering the minutes\n");
  scanf("%d",&min);
  printf("Now enter the seconds.\n");
  scanf("%d", &sec);

  printf("Your ran %.2f km in %d min , %d sec.\n",distk,min,sec);

  msec = min * S_PER_M + sec;
  distm = distk * M_PER_K;

  rate = distm / msec * S_PER_H;

  printf("your every speed was %.2f mph\n",rate); 
  


  return 0;
}