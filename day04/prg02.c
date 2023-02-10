/*
i/o statements

formated i/o

printf(control string, vargs);
scanf((control string, vargs address);

%c - single char
%d - int
%f - float
%u - unsigned number
%lf - double

*/

#include <stdio.h>

int main()
{
	/*
	int i=101122;
	float f=11;
	double d=12;
	char c = 'x';
	unsigned int ui = 100;
	
	printf("\ni=%05d",i);
	printf("\nf=%f",f);
	printf("\nd=%lf",d);
	printf("\nc=%c",c);
	printf("\nui=%u",&i);
	printf("\nui=%u",&f);
	printf("\nui=%u",&d);
	printf("\nui=%u",&c);

	*/
	int i,a,b;
	float f=10.11;
	double d;
	char c;

	/*
	scanf("%c",&c);
	scanf("%d",&i);
	scanf("%f",&f);
	scanf("%lf",&d);
	

	printf("\ni=%d",i);
	printf("\nf=%f",f);
	printf("\nd=%lf",d);
	printf("\nc=%c Ascii value=%d",c,c);
	*/

	//scanf("%d%f%lf %c",&i,&f,&d,&c);

	//printf("\ni=%d\ta=%d\tb=%d\n",i,a,b);

	//scanf("%3d",&i);
	// scanf("%f",&f);
	// scanf("%lf",&d);
	// scanf(" ");
	// scanf("%c",&c);
	printf("\n%d",printf("Hello Bhima"),f);
	//printf("\ni=%05d",i);
	// printf("\nf=%f",f);
	// printf("\nd=%lf",d);
	// printf("\nc=%c Ascii value=%d",c,c);

	printf("\n\n");

	return 0;
}
