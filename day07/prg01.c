/* Demo on Arrays */


#include <stdio.h>
#define A_SIZE 5

int main()
{
	int arr[A_SIZE];

	int iValue = 0, value;
	
	for(iValue = 0,value=10;iValue < A_SIZE;iValue++, value += 10)
	{
		arr[iValue] = value ;
	}
	
	/*arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	*/


	printf("\n1st element in array a[0] = %d",arr[0]);
	printf("\n2nd element in array a[1] = %d",arr[1]);
	printf("\n3rd element in array a[2] = %d",arr[2]);
	printf("\n4th element in array a[3] = %d",arr[3]);
	printf("\n5th element in array a[4] = %d",arr[4]);

	for(iValue=0;iValue<A_SIZE;iValue++){
		printf("\nelement in array a[%d] = %d",iValue,arr[iValue]);
	}
	
	printf("\n\n");
	return 0;

}