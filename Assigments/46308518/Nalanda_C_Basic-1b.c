#include<stdio.h>
#define PI 3.14159

float cal_area(float r);

float  main(){
	float in;
	
	/*DT/01*/
	printf("Enter radius of circle");
	scanf("%f",&in);
	/*DT/02*/
	if(in<0){
		printf("Error: Negative values not permitted");
	}
	else{
		printf("The area of a circle of radius %f units is %f units", in,cal_area(in));
	}
	return 0.0;
}

float cal_area(float r){
	float area=PI*r*r;	 
//	printf("The area of a circle of radius %f units is %f units ",r,area);
	return area;
}
