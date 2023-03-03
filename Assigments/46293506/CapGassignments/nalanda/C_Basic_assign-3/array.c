#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int getArrayEl(int *,int);
int disArray(int *);
int bubbleSort(int *);
int selectionSort(int *);
int searchEle(int *);

int main()
{
	int arr[SIZE];
	int choice,ch=1;
	printf("The number of elements acceptsis %d\n",getArrayEl(arr,SIZE));
	
	while(ch)
	{
		printf(" SELECt \n 1>display array\n 2.bubbleSort\n 3.selectionSort \n 4.search an element\n");
	        printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: disArray(arr);
				break;
			case 2: bubbleSort(arr);
				break;
			case 3: selectionSort(arr);
				break;
			case 4: searchEle(arr);
				break;
			default:printf("Wrong Choice\n");
			return	EXIT_FAILURE;
                 }
	}
	printf("Thank you for using Application\n");

	return 0;
}

int getArrayEl(int arr[],int size)
{
	int count=0;
	int i;
	printf("Enter a size of an array\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter a array element:%d\n",i);
		scanf("%d",&arr[i]);
		count++;
	}
	return count;
}

int disArray(int arr[])
{
	int i;
        printf("Array Elements are\n");

	for(i=0;i<SIZE;i++)
	{
		printf("%d\n",arr[i]);
	}
}

int bubbleSort(int arr[])
{
	int i,j;
	int help;
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[i]>arr[j+1])
			{
				help=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=help;
			}
		}
	}
	printf("Elements SORTED\n");
}

int selectionSort(int arr[])
{
	int i,j;
	int min;
	int pos;
	int help;
	for(i=0;i<=SIZE-2;i++)
	{
		min=arr[i];
		pos=i;
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				pos=j;
			}
		}
		help=arr[i];
		arr[i]=arr[pos];
		arr[pos]=help;
	}

	printf("Elements SORTED\n");

}
int searchEle(int arr[])
{
	int i;
	int ele;
	int mid;
	int low=0;
	int high=arr[SIZE-1];

	printf("Enter a element to search\n");
	scanf("%d",&ele);

	while(low<=high)
	{
	        mid= (low + high)/2;
		if(ele==arr[mid])
		{
			printf("Elements found @ %d\n",mid);
			break;
		}
		else if(ele>=arr[mid])
		{
			low=mid+1;
			high=high;

		}
		else
		{
			high = mid-1;
			low = low;
		}
	}
}


