#include <myHeader.h>
#include <stdio.h>
#include <stdlib.h>

#define aSize 5

int main()
{
	int arr[aSize];
	int ch=0;

	getValArr(arr,aSize);
	dispArr(arr,aSize);
	while(1){
		printf("\nSort the array in:\n1. Assending Order\n2. Descending Order");
		printf("\n3. Display List\n4. Exit");
		printf("\nChoice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					sortAArr(arr, aSize);
					dispArr(arr,aSize);
					break;
			case 2:
					sortDArr(arr, aSize);
					dispArr(arr,aSize);
					break;
			case 3:
					dispArr(arr, aSize);
					break;
			case 4:
					printf("\nThank you for using this Software\n\n");
					exit(EXIT_SUCCESS);
			default:
					printf("\nWrong Choice Entered");

		}
	}

	printf("\nBye\n\n");
}