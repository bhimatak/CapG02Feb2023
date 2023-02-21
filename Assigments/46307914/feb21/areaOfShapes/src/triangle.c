#include<stdio.h>
#include<triangle.h>

void triangleArea()
{
	double h,b,area;

	printf("\n\nEnter the height of the triangle:");
	scanf("%lf",&h);

	printf("\n\nEnter the base of the triangle:");
	scanf("%lf",&b);

	area = 0.5*h*b;

	printf("\n\nArea of triangle is : %lf unit\n\n",area);

}


