#include<stdio.h>
#include<myHeader.h>

int main()
{
	float radius;
	float area;

	printf("\nEnter the radius of the circle:");
	scanf("%f",&radius);
	if(radius < 0)
	{
		printf("\nNegative values not permitted");
	}
	else
	{
		area = calArea(radius);
		printf("The area of a circle of radius %f units is %f units.",radius,area);
	}
	printf("\n\n");
	return(EXIT_SUCCESS);
}
