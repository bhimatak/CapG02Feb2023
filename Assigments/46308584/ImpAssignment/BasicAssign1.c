#include<stdio.h>
#define MAX_ARRAY_SIZE 10

void initArray(int arr[],int arrSize)
{
	int i;
        for(i=0;i<arrSize;i++)
	{
        arr[i]=0;
        }
}
void displayArray(int arr[],int arrSize)
{
	int i;
        for(i=0;i<arrSize;i++)
	{
        printf("%d\n",arr[i]);
        }
}
int acceptArray(int arr[],int maxSize)
{
        int numElements;
        int i;
        printf("\nEnter the number of elements to enter: \n");
        scanf("%d",&numElements);
        if (numElements>maxSize)
	{
       		 numElements=maxSize;
        }
        printf("\nEnter %d integers: \n",numElements);
        for(i=0;i<numElements;i++)
	{
       		 scanf("%d",&arr[i]);
        }
        return numElements;
}
int sumMaxMin(int arr[],int arrSize)
{
       int max=arr[0];
       int min=arr[0];
       int i;
       for(i=1;i<arrSize;i++)
	{
        if(arr[i]>max)
		{
            max=arr[i];
        }
        if(arr[i]<min)
		{
            min=arr[i];
        }
    }
    return (max+min);
}
int countOccurrences(int arr[],int arrSize,int item)
{
    int count=0;
    int i;
    for (i=0;i<arrSize;i++)
	{
        if (arr[i]==item)
		{
            count++;
        }
    }
    return count;
}
void reverseArray(int arr[],int arrSize)
{
	int i;
    for (i=0;i<arrSize/2;i++)
	{
        int temp=arr[i];
        arr[i]=arr[arrSize-1-i];
        arr[arrSize-1-i]=temp;
    }
}
int main()
{
    int myArray[MAX_ARRAY_SIZE];
    int item;
    int numElements=acceptArray(myArray,MAX_ARRAY_SIZE);
    printf("\nThe array is:\n");
    displayArray(myArray,numElements);
    printf("\nThe sum of the maximum and minimum element is: %d\n",sumMaxMin(myArray,numElements));
    printf("\nEnter an integer to count its occurrences: \n");
    scanf("%d",&item);
    printf("\nThe number of occurrences of %d is: %d\n",item,countOccurrences(myArray,numElements,item));
    printf("\nReversing the array...\n");
    reverseArray(myArray,numElements);
    printf("\nThe reversed array is:\n");
    displayArray(myArray,numElements);
    return 0;
}

