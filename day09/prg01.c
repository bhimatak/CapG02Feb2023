/*

Demo on pointers

syntax:

	dt *pName;

*/


#include <stdio.h>

int main()
{
	int a=10;
	char *ptr;
	int *ptr1;

	char ch='a';

	printf("\nsizeof ptr=%d\tsizeof ptr1=%d",sizeof(ptr),sizeof(ptr1));

	printf("\naddress of a=%u and value of a=%d",&a,a);

	printf("\naddress of ptr=%u",&ptr);
	
	ptr = &a;

	printf("\naddress stored in ptr=%u",ptr);
	printf("\nValue stored @ %u is %d",ptr,*ptr);
	
	printf("\nAddress of ch=%u, and value = %c",&ch,ch);
	ptr = &ch;

	printf("\naddress stored in ptr=%u",ptr);
	printf("\nValue stored @ %u is %c",ptr,*ptr);


	printf("\n\n");

	return 0;
}

