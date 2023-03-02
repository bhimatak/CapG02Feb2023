#include<stdio.h>
#define pi 3.14159

float circle_area(float);
int main()
{
	float radius,area;
	printf("Enter the radius of circle : ");
	scanf("%f",&radius);
	if(radius>=0)
	{
		area=circle_area(radius);
		printf("Area of the circle : %f\n",area);
	}
	else
	{
		printf("Invalid radius\n");
	}

	return 0;

}

float circle_area(float radius)
{
	float area;
	area = pi*radius*radius;
	return area;
}
