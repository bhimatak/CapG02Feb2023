#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20

int array_input(int [],int,int);
void array_display(int [],int);
void bubble_sort(int [],int);
void merge_sort(int [],int,int);
void merge(int [],int,int,int);
int binary_search(int [],int,int,int);

int main()
{
	int arr1[MAXSIZE];
	int array_size=0,ea=0,de,ch,se,r;

	printf("\n\nEnter the size of array: ");
	scanf("%d",&array_size);
	
	ea=array_input(arr1,array_size,MAXSIZE);

	printf("\n\nEnter the number of elements to display (give <= %d):",ea);
	scanf("%d",&de);

	array_display(arr1,de);

	printf("Enter 1 for bubble sort 2 for merge sort\n");
	scanf("%d",&ch);

	if(ch == 1)
		bubble_sort(arr1,ea);
	else if (ch == 2)
	{
		merge_sort(arr1,0,ea-1);
		array_display(arr1,ea);
	}
	else
	{
		printf("\nWrong choice\n\n");
		return EXIT_SUCCESS;
	}
	
	printf("\nEnter the element to search:");
	scanf("%d",&se);

	r=binary_search(arr1,se,0,ea);

	if(r!=0)
		printf("\nThe element is found in the given array!!");
	else
		printf("\nThe element is not found at position in given array!!");

	printf("\n\n");

	return EXIT_SUCCESS;
}

int array_input(int arr[], int arr_size, int max_size)
{
	int i;

	printf("\nEnter the elements:\n");

	for(i=0;i<arr_size;i++)
	{
		if(i<max_size)
			scanf("%d",&arr[i]);
		else
		{
			printf("\nYou have exceeded the max array size!!\n");
			break;
		}
	}

	return i;
}

void array_display(int arr[], int ds)
{
	int i;

	for(i=0;i<ds;i++)
		printf("\n%d",arr[i]);

	printf("\n\n");
}

void bubble_sort(int arr[], int size)
{
	int i=0,j=0,swap=0,temp=0;
	for(i=0;i<size-1;i++)
	{
		swap=0;
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swap=1;
			}
		}
		if(swap==0)
			break;
	}

	array_display(arr,size);
}

void merge_sort(int arr[],int l, int r)
{
	int m;

	if(l<r)
	{
		m=l+(r-l)/2;

		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);

		merge(arr,l,m,r);
	
	}

}

void merge(int arr[],int l, int m, int r)
{
	int end1=m-l+1;
	int end2=r-m;
	int i=0,j=0,k=0;
	int L[end1],M[end2];

	for(i=0;i<end1;i++)
		L[i]=arr[l+i];
	for(j=0;j<end2;j++)
		M[j]=arr[m+1+j];

	i=0;
	j=0;
	k=l;

	while(i<end1 && j<end2)
	{
		if(L[i] <= M[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=M[j];
			j++;
		}
		k++;
	}
	while(i<end1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<end2)
	{
		arr[k]=M[j];
		j++;
		k++;
	}
}

int binary_search(int arr[], int se, int start, int end)
{
	int mid=0;

	while(start<=end)
	{
		mid=start+(end-start)/2;

		if(arr[mid] == se)
			return mid;

		if(arr[mid]<se)
			start=mid+1;
		else
			end=mid-1;
	}

	return 0;
}
