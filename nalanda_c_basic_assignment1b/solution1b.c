#include <stdio.h>


#define pi 3.14

double cal_area(float r)
{
	float area;
	area=pi*r*r;
	return area;
}


int main()
{
	float radius;
	printf("Enter the radius of the circle : ");
	scanf("%f",&radius);

	if(radius<0){
		printf("Negative values not permitted");
	}
	
	else
			printf("The area of a circle of radius %f units is %f units\n",radius,cal_area(radius));

	return 0;
}



