#include<stdio.h>
#include<string.h>

int main()
{

	struct car
	{
		char carColor[20];
		int carVersion;
		char carBrand[20];
		char fuelType[20];
	};

	struct car c1;
	scanf("%s%d%s%s",c1.carColor,&c1.carVersion,c1.carBrand,c1.fuelType);
	printf("\n car carColor:%s",c1.carColor);
	printf("\n car carVersion:%d",c1.carVersion);
	printf("\n car carBrand:%s",c1.carBrand);
	printf("\n car fuelType:%s",c1.fuelType);

	printf("\n\n");

	return 0;
}
::wq


