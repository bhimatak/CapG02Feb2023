/*
   Arrays in consective memory addersses
*/

#include <stdio.h>

int main()
{

	/*
	int a=10;
	double d=11.11;
	int b=20;
	char c='x';
	float f = 23.22;
	int x = 1011;


	printf("\nAddress of a = %u and its value stored=%d", &a,a);
	printf("\nAddress of d = %u and its value stored=%lf", &d,d);
	printf("\nAddress of b = %u and its value stored=%d", &b,b);
	printf("\nAddress of c = %u and its value stored=%c", &c,c);
	printf("\nAddress of f = %u and its value stored=%f", &f,f);
	printf("\nAddress of x = %u and its value stored=%d", &x,x);

	*/


	int arr[5] = {10,20,30,40,50};
	int a=10;
	double d=11.11;
	int b=20;
	char c='x';
	float f = 23.22;
	int x = 1011;
	int iv;

	for(iv=0;iv<5;iv++)
	{
		printf("\nAddress of arr[%d] = %u and its value stored=%d",iv, &arr[iv],arr[iv]);
	
	}

	printf("\n\n");

	return 0;
}