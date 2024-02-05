#include <iostream>

using namespace std;

struct CandyBar
{
	char name[40];
	float weight;
	int calor;
};

void showCandy(CandyBar &can,const char na[] = "Mile Much",const float we =2.85,const int cal = 350);

int main(void)
{
	char name[40] = "wangwang";
	float weight = 80.0;
	int cal = 79;

	CandyBar candy;

	showCandy(candy,name,weight,cal);

	cout << candy.name << endl;
	cout << candy.weight << " " << candy.calor << " " <<endl;
	return 0;
}

void showCandy(CandyBar &can,const char na[],const float we,const int cal)
{
	for(int i = 0;i < 40; i++)
		can.name[i] = *(na + i);

	can.weight = we;
	can.calor = cal;
}
