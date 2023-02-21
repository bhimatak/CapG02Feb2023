#include<stdio.h>
#include<circle.h>

void circleArea()
{
	double s,area;

	printf("\n\nEnter the radius of the circle:");
	scanf("%lf",&s);

	area = 3.1428*s*s;

	printf("\n\nArea of circle is : %lf sq.units\n\n",area);

}


