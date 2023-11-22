#include <stdio.h>

int main(void)
{
  char ch;
  int i;
  float fl;

  fl = i = ch = 'C';
  printf("ch = %c, i = %d, fl = %.2f\n",ch,i, fl);
  ch = ch + 1;  //68
  i = fl + 2 * ch; // 68 * 2 + 67.00 --> 203
  fl = 2.0 * ch + i;  // 68 * 2 + 203
  printf("ch = %c, i = %d, fl = %.2f\n",ch,i, fl);
  ch = 5212205; // 取后八位的数据 0010 1101 
  printf("%c\n", ch);

  return 0;
}