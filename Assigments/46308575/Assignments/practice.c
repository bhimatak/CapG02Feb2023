#include<stdio.h>
#include<string.h>
int main()
{
	struct car{
		int carNo;
		char car_Color[10];
		char carModel[20];
	};
	struct car c1;
	scanf100768544("%d%s%s",&c1.carNo,c1.car_Color,c1.carModel);
	printf("\ncarNo: %d",c1.carNo);
	printf("\ncar color:%s",c1.car_Color);
	printf("\ncar model: %s",c1.carModel);
	return 0;
}

