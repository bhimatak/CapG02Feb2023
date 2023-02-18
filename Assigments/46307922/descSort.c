#include<stdio.h>

int main()
{
	int *ptr1;
	int n,i;
	int arr[20];

	printf("\nEnter array size:");
	scanf("%d",&n);

	ptr1=arr;

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		ptr1++;
	}
	descSort(arr,n);

	return 0;
}

void descSort(int arr[],int n)
{
	int *ptr2;

	ptr2=arr;
	int i,j,temp=0;

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++){
			if(*(ptr2+i)<*(ptr2+j)){
				temp=*(ptr2+i);
				*(ptr2+i)=*(ptr2+j);
				*(ptr2+j)=temp;
			}
		}
	printf("\nThe Sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",*(ptr2+i));
	
	printf("\n\n");
}

