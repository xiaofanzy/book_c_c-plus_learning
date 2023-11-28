#include <stdio.h>

#define ARTICHOKE 1.25
#define BEET 0.65
#define CARROT 0.89

#define DISCOUNT 0.05
#define DISCOUNT_LIMIT 100.0

#define SHIPMENT_1 5.0
#define SHIPMENT_2 20.0

double get_transfromconst(double artichoke, double beet, double carrot);

int main(void)
{
  double artichoke = 0.0, beet = 0.0, carrot = 0.0;
  char ch;
  double tansformconst = 0.0;
  double total = 0.0, discount = 0.0, shipment = 0.0;

  printf("Please enter the vegetable your have choose:\n");
  printf("a) artichoke\tb) beet\nc) carrot\tq) quit\n");

  while ((ch = getchar()) != 'q')
  {
    switch (ch)
    {
    case 'a':
      printf("Please enter the pounds of artichoke:\n");
      scanf("%lf", &artichoke);
      break;
    case 'b':
      printf("Please enter the pounds of beet:\n");
      scanf("%lf", &beet);
      break;
    case 'c':
      printf("Please enter the pounds of carrot:\n");
      scanf("%lf", &carrot);
      break;
    default:
      break;
    }
  }

  // 获取费用
   tansformconst = get_transfromconst(artichoke, beet, carrot);
  
  // 获取蔬菜费用
  artichoke *= ARTICHOKE;
  beet *= BEET;
  carrot *= CARROT;
  total = artichoke + beet + carrot;

  // 获取折扣
  if(total > DISCOUNT_LIMIT)
  {
    discount = total * DISCOUNT;
  }

  return 0;
}

double get_transfromconst(double artichoke, double beet, double carrot)
{
  double total = 0.0, discount = 0.0, shipment = 0.0;

  total = artichoke + beet + carrot;

  if(total < SHIPMENT_1)
  {
    shipment = SHIPMENT_1;
  }
  else if(total > SHIPMENT_1 && total < SHIPMENT_2)
  {
    shipment = SHIPMENT_2;
  }
  else
  {
    shipment = SHIPMENT_2 + (total - SHIPMENT_2) * 0.1;
  }

  return shipment;

}

