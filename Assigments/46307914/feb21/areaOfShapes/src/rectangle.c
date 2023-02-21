#include<stdio.h>
#include<rectangle.h>

void rectangleArea()
{
	double l,w,area;

	printf("\n\nEnter the length of the rectangle:");
	scanf("%lf",&l);

	printf("\n\nEnter the width of the rectangle:");
	scanf("%lf",&w);

	area = l*w;

	printf("\n\nArea of rectangle is : %lf unit\n\n",area);

}


