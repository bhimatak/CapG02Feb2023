#include<stdio.h>

int main()
{
	int n;
	int i,j=0;


	printf("\nenter number of elements:");
	scanf("%d",&n);

	int arr[n];
	printf("\nThe array elements:");
	for(i=0;i<n;i++){ 
		scanf("%d",&arr[i]);
		}

	printf("\nOriginal Array:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	for(i=1;i<n;i+=2){
		arr[j]=arr[i];
		j++;
	}
	n=j;
	
	printf("\nModified Array:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n\n");

	return 0;
}
