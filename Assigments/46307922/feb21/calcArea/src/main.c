#include<myHeader.h>
#include<areaSqu.h>
#include<areaRec.h>
#include<areaTri.h>
#include<areaCir.h>

int main()
{
	int op1,op2,in;
	double result=0;

	printf("\nEnter two operand values:\n");
	scanf("%d%d",&op1,&op2);

	printf("\n Enter, \n 1.Square\n 2.Rectangle\n 3.Circle\n 4.Triangle:");
	scanf(" ");
	scanf("%d",&in);
	
	switch(in)
	{
		case 1:
			result = areaSqu(op1);
			printf("\n area of square = %f",result);
			break;
		case 2:
			result = areaRec(op1,op2);
			printf("\n area of rectangle = %f",result);
			break;

		case 3:
			result = areaCir(op2);
			printf("\n area of circle = %f",result);
			break;

		case 4:
			result = areaTri(op1,op2);
			printf("\n area of triangle = %f",result);
			break;
		default:
			printf("\nEnter valid option\n");
	}
	printf("\n\n");

	return(EXIT_SUCCESS);
}
/*
int areaRec(int op1,int op2)
{
	return(op1*op2);
}

int areaSqu(int op1)
{
	return(op1*op1);
}

int areaCir(int op2)
{
	double res;
	const int pi=3.14;

	res=pi*op2*op2;

	return(res);
}

int areaTri(int op1,int op2)
{
	double res;

	res=0.5*op1*op2;

	return(res);
}
*/
