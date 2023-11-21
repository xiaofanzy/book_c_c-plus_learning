# include<stdio.h>

int main(void)
{
  /* a / b or a % b 当 a为正的时候，结果是正
    当a为负的时候，结果是负
   */
  printf("11 / 5 is %d and 11 %% 5  is %d \n", 11 / 5, 11 % 5);
  printf("11 / -5 is %d and 11 %% -5  is %d \n", 11 / -5, 11 % -5);
  printf("-11 / 5 is %d and -11 %% 5  is %d \n", -11 / 5, -11 % 5);
  printf("-11 / 5 is %d and -11 %% 5  is %d \n", -11 / -5, -11 % -5);


  return 0;
}