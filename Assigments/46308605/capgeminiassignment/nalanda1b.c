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
