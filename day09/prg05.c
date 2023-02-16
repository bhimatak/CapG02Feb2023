#include <stdio.h>

int main()
{
	int arr[5];
	int *ptr;
	int it;
	
	//ptr = arr;
	for(it=0;it<5;it++){
	//	scanf("%d",&arr[it]);
		scanf("%d",(ptr+it));
		//ptr++;

	}

	printf("\nElements are\n");
	for(it=0;it<5;it++)
		printf(" %d",*(arr+it));
	
	//ptr = arr;

	printf("\nElements are using ptr\n");
	for(it=0;it<5;it++){
		printf(" %d",*(ptr+it));
		//ptr++;
	}
	
	
	printf("\n\n");

	return 0;
}
