#include<stdio.h>
#include<stdlib.h>
#include<square.h>
#include<triangle.h>
#include<rectangle.h>
#include<disp.h>

int main()
{
	int option=disp();
	double side,len,breadth,base,height,result;

	if(option==1)
	{
		printf("\nEnter the side of square:");
		scanf("%lf",&side);
	}
	else if(option==2)
	{
		printf("\nEnter the length and breadth:");
		scanf("%lf%lf",&len,&breadth);
	}
	else if(option==3)
	{
	    printf("\nEnter the base and height:");
		scanf("%lf%lf",&base,&height);
	}
	switch(option)
	{
		case 1:
				result = square(side);
				printf("Area of Square=%lf",result);
				break;
		case 2:
				result = rectangle(len,breadth);
				printf("Area of rectangle=%lf",result);
				break;
		case 3:
				result = triangle(base,height);
				printf("Area of triangle=%lf",result);
				break;
		default:
				printf("\nWrong option entered \n");
	}
	printf("\n\n");
	return(EXIT_SUCCESS);
}
