#include<disp.h>
#include<stdio.h>
#include<stdlib.h>

int disp()
{
	int option;

	printf("\nEnter the option to calculate the area of figures: ");
	printf("\nEnter, \n1.Area of square\n2.Area of rectangle\n3.Area of triangle\nChoice: ");
	scanf("%d",&option);
	return option;
}
