#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	struct car
	{
		int number;
		int modelnumber;
		char modelname[20];
		char color[20];
		char fuelType[20];
		double price;
	}car1;

	car1.number=5168;
	car1.modelnumber=12345;
	strcpy(car1.modelname,"Audi A20");
	strcpy(car1.color,"Milk Green");
	strcpy(car1.fuelType,"Petrol");
	car1.price=889234000;
	
	printf("\n\nCar name:%s",car1.modelname);
	printf("\nModel number:%d",car1.modelnumber);
	printf("\nCar Reg Number:%d",car1.number);
	printf("\nCar color:%s",car1.color);
	printf("\nFuel Type:%s",car1.fuelType);
	printf("\nCar Price:%.2lf rupees\n\n",car1.price);

	return(EXIT_SUCCESS);
}

