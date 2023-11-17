#include <stdio.h>

#define G_L 3.785
#define M_K 1.609

int main(void)
{
  /* double 类型的scanf 无法获取到值。 */
  float miles, gallon;

  printf("mills:\n");
  scanf("%f",&miles);

  printf("gallon:\n");
  scanf("%f",&gallon);

  printf("avg %.1f\n",miles / gallon);

  printf("avg %.1f\n", miles * M_K / (gallon * G_L));


  return 0;
}