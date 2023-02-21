#include<stdio.h>

int array_input(int [], int, int);
void array_display(int [], int);
int sum_of_max_and_min(int [],int);
int mycount(int [],int,int);
void myrev(int [], int);
int main()
{
	int arr1[15]={ };
	int max_size=15,array_size=0,ea=0,sum=0,ds,n,count;
	
	printf("\n\nEnter the size of array: ");
	scanf("%d",&array_size);
	
	ea=array_input(arr1,array_size,max_size);
	
	printf("\n\nEnter the number of elements to display (give <= %d):",ea);
	scanf("%d",&ds);
	
	array_display(arr1,ds);
	
	sum=sum_of_max_and_min(arr1,ea);
	
	printf("\n\nThe sum of maximum and minimum elements in the array is : %d\n\n",sum);
	
	printf("Enter the element to count the occurences: ");
	scanf("%d",&n);
	
	count=mycount(arr1,n,ea);
	
	if(count>0)
		printf("\n\nThe element %d has occured %d times in the array!\n\n",n,count);
	else
		printf("\n\nThe element %d is not present in the array!\n\n",n);
	
	myrev(arr1,ea);

	return 0;
}

int array_input(int arr1[], int arr_si, int ma_si)
{
	int i;

	printf("\nEnter the elements:\n");

	for(i=0;i<arr_si;i++)
	{
		if(i<ma_si)
		{
			scanf("%d",&arr1[i]);
		}
		else
		{
			printf("\nYou have exceeded the max array size!!\n");
			break;
		}
	}
	return i;
}

void array_display(int arr1[],int ds)
{
	int i;

	for(i=0;i<ds;i++)
	{
		printf("\n%d",arr1[i]);
	}

	printf("\n\n");

}

int sum_of_max_and_min(int arr1[],int s)
{
	int max=arr1[0],min=arr1[0],i;

	for(i=0;i<s;i++)
	{
		if(max<arr1[i])
			max=arr1[i];

		if(min>arr1[i])
			min=arr1[i];
	}

	return max+min;
}
	
int mycount(int arr1[],int n, int s)
{
	int i,j=0;

	for(i=0;i<s;i++)
	{
		if(arr1[i]==n)
			j++;
	}

	return j;
}

void myrev(int arr1[],int ms)
{
	int mid=ms/2;
	int temp,i,j;

	printf("\n\nThe reverse of the array is: \n");

	for(i=0,j=ms-1;i<mid;i++,j--)
	{
		temp=arr1[i];
		arr1[i]=arr1[j];
		arr1[j]=temp;
	}

	for(i=0;i<ms;i++)
	{
		printf("%d  ",arr1[i]);
	}

	printf("\n\n");
}
