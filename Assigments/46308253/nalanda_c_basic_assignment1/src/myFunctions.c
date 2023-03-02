#include<myHeader.h>
#include<stdio.h>

void display(int *myArray,int numberDisplay)
{
	int i; 

	if(numberDisplay > MAX_SIZE)
	{
		printf("\nYou have exceeded the maximum size of the array.Please try again!");
	}
	else
	{
		for(i=0;i < numberDisplay;i++)
		{
			printf("\n%d",myArray[i]);
		}
	}
}

void getValues(int *myArray,int numberAccept,int maxSize)
{
	int i;

	if(numberAccept > maxSize)
	{
		printf("\nYou have exceeded the maximum size of the array.Try again!");
	}
	else
	{
		printf("\nEnter the elements in the array:");
		for(i=0;i < numberAccept;i++)
		{
			scanf("%d",&myArray[i]);
		}
	}

}

int sumElement(int *myArray,int size)
{
	int max=0;
	int min=0;
	int i;

	for(i=0;i<size;i++)
	{
		if(myArray[i] > max)
		{
			max = myArray[i];
		}
		if(myArray[i] < min)
		{
			min = myArray[i];
		}
	}
	return(max+min);
}

int myCount(int *myArray,int item,int maxArrSize)
{
	int count = 0;
	int i;

	for(i=0;i<maxArrSize;i++)
	{
		if(myArray[i] == item)
		{
			count+=1;
		}
	}
	return count;
}

void myRev(int *myArray,int maxArrSize)
{
	int mid = maxArrSize/2;
	int i=0;
	int si;
	int ei;
	int temp;

	for(si=0,ei=maxArrSize-1;si<mid;si++,ei--)
	{
		temp = myArray[si];
		myArray[si] = myArray[ei];
		myArray[ei] = temp;
	}
	printf("\nElements after reversing the array:");
	for(i=0;i<maxArrSize;i++)
	{
		printf("\n%d",myArray[i]);
	}
}

