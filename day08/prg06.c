/*


more on functions

*/

#include <stdio.h>

void printList(int [], int);
//int getCountArr(int *);

int revArr(int [], int);

int main()
{
	int a[6] = {10,20,30,40,50,60};

	printList(a,6);
	revArr(a,6);
	printf("\nAfter Reversing the array\n");
	printList(a,6);
	
	return 0;
}

void printList(int arr[], int n)
{
	int i;
	printf("\nList is:\n");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);

	printf("\n\n");
}

int revArr(int arr[], int n)
{
	int i;
	int temp;
	int si, ei, mid=n/2;
	
	for(si=0,ei=n-1;si<mid;si++)
	{
		temp = arr[ei];
		arr[ei] = arr[si];
		arr[si]=temp;
		ei--;
	
	}
}
