#include<stdio.h>
#include<square.h>

void squareArea()
{
	double s,area;

	printf("\n\nEnter the side of the square:");
	scanf("%lf",&s);

	area = s*s;

	printf("\n\nArea of square is : %f sq.units\n\n",area);

}


