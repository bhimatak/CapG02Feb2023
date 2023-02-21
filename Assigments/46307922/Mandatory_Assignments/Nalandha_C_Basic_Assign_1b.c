#include<stdio.h>
#define pi 3.14159

float cal_area(float);

int main()
{
	float radius,area;

	printf("\n\nEnter the radius of circle: ");
	scanf("%f",&radius);

	if(radius>=0)
	{
		area=cal_area(radius);
		printf("\n\nThe area of circle of radius %f units is %f units\n\n",radius,area);

	}

	else
	{
		printf("\n\nError: Negative values not permitted\n\n");
	}

	return 0;

}

float cal_area(float radius)
{
	float area;

	area = pi*radius*radius;
	
	return area;

}
