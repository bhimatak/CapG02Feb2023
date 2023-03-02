#include <stdio.h>

#define PI 3.14159

float cal_area(float radius) {
    float area = PI * radius * radius;
    return area;
}

int main() {
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Error: Negative values not permitted\n");
        return 0;
    }

    float area = cal_area(radius);
    printf("The area of a circle of radius %.2f units is %.2f units\n", radius, area);

    return 0;
}
