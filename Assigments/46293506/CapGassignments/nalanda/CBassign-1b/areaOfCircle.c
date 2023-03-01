#include<stdio.h>

#define PI 3.14

float areaOfCircle(float);

int main()
{
  float radius;
  
  
  printf("Enter a Radius \n");
  scanf("%f",&radius);

  if(radius<0)
   {
     printf("Negative values not permitted\n");
   }
   else
   {
      printf("The area of circle of radius %f units is:%f units \n",radius,areaOfCircle(radius));  }
  
  return 0;
  }

 float areaOfCircle(float radius)
 {
   float res;
   res =PI *radius*radius;
   return res;
 }
