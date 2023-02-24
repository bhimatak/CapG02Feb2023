/*Write an application to prompt and read a number of units of length (a float) from user and print out the area of a circle of that radius. Assume that the value of pi is 3.14159.
a. If the input value is negative, it should print an error message “Error: Negative values not permitted” 
b. If input is positive, should display output “The area of a circle of radius ... units is.... units”.*/


#include <stdio.h>
#define PI 3.14159

float cal_area(float radius)
{
    return (PI*radius*radius);
}

int main()
{
    float radius;
    printf("\nEnter the radius of the circle in units: \n");
    scanf("%f", &radius);
    if (radius<0)
	{
        printf("\nError: Negative values not permitted\n");
        return 0;
    }
    float area=cal_area(radius);
    printf("\nThe area of a circle of radius %.2f units is %.2f units.\n",radius, area);
    return 0;
}
