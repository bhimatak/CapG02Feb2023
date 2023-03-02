#include<stdio.h>
#include<stdlib.h>

#define SIZE 6

int dispArray(int *);
int bubbleSort(int *);
int selectionSort(int *);
int searchEle(int *);

int main()
{
	int arr[SIZE];
	int ch=1;
	int i,count=0;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
		count++;
	}
	printf("The elements accetpted is %d;",count);
	printf("\nElements are \n")
	{
	}
	while(ch)
	{
		printf("Enter your choice \n");
		printf("1.displayArray \n 2.bubble Sort\n 3.selectionSort\n 4.to search a element\n");

		case 1:dispArray(arr);
		       break;
		case 2:bubbleSort(arr);
		       break;
		case 3:selectionSort(arr);
		       break;
		case 4:searchEle(arr);
		       break;
		default: printf("wrong choice\n");
			 return;

	}
	return 0;
}





int dispArray(int arr[])
{
	int i;
	printf("Array elements are \n");
	for(i=0;i<SIZE;i++)
	{		
		printf("%d ",arr[i]);
	}
}

int bubbleSort(int arr[])

{
	int i,j;
	int help;
	for (i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[i]>arr[j+1])
			{
				help=arr[i];
				arr[i]=arr[j+i];
				arr[j+1]=help;
			}
		}
	}
}

int selectionSort(int arr[])
{
	int i,j;
	int min;
	int pos;
	int help;
	for(i=0;i<=size-2;i++)
	{
		min=[arr[i]];
		pos=1;
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				pos=j;
			}
			help=arr[i];
			arr[i]=arr[pos];
			arr[pos]=help;
		}



}

int searEle(int arr[])
{
	int i;
	int ele;
	int mid;
	int low=0;
	int high=arr[SIZE-1];
	printf("enter a elemet to search\n");
	scanf("%d",ele);
	while(low<high)
	{
		mid=(low + high)/2;
		if(ele==arr[mid])
		{
			printf("element found %d\n",i);
		}
		else if(ele>arr[mid])
		{
			low=mid+1;
			high=high;
		}
		else
		{
			high=low-mid;
			low=low;
		}

	}
}

