/*Assignment 1b*/

#include<stdio.h>
#include<stdlib.h>

//Defining Macro
#define Pi 3.14

double cal_area(float r)
{
	float area;
	area=Pi*r*r;
	return area;
}

int main()
{
	float r;

	printf("Enter the radius of circle(in units): ");
	scanf("%f",&r);

	if(r<0)
		printf("Error: Negative values not permitted\n");
	else
		printf("The area of a circle of radius %f units is %f units\n",r,cal_area(r));

	printf("\n\n");

	return 0;
}
