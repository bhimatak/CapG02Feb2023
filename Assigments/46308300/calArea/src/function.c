#include<stdio.h>
#define PI 3.141

double triangleArea(float h,float b)
{
    return (h*b)/2;
}
double rectangleArea(float len,float bed)
{
    return len*bed;
}
double squareArea(float s)
{
    return s*s;
}
double circleArea(float r)
{
    return PI*r*r;
}
