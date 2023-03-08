#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10


void display(int *,int);
int getValues(int *,int,int);
void bubbleSort(int *,int);
void mergeSort(int *,int);
void merge(int *,int *,int,int *,int);
int binarySearch(int *,int,int);
int main()
{
	int numberDisplay;
	int numberAccept = 0;
	int numbersInserted = 0;
	int item;
	int choice;
	int myArray[MAX_SIZE]= {0,};
	int x,element;

	while(1)
	{

	        printf("\n\n1.Display the array\n2.Input elements into the array\n3.Sort the array using bubble sort\n4.Sort the array using merge sort.\n5.Search for an element using binary search.\n6.EXIT\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number of elements to display:");
				scanf("%d",&numberDisplay);
				display(myArray,numberDisplay);
				break;
			case 2:
				printf("\nEnter the number of elements you want to insert in the array");
				scanf("%d",&numberAccept);
				numbersInserted = getValues(myArray,numberAccept,MAX_SIZE);
				printf("\n%d numbers inserted in the array successfully",numbersInserted);
				break;
			case 3:
				bubbleSort(myArray,numbersInserted);
				break;
			case 4:
				mergeSort(myArray,numbersInserted);
				break;
			case 5:
				printf("\nEnter the element to be searched:");
				scanf("%d",&element);
				x = binarySearch(myArray,numbersInserted,element);
				if(x==-1)
				{
					printf("\nElement cannot be found");
				}
				else
				{
					printf("\nElement found at %d position",x);
				}
				break;
			case 6:

				printf("\nApplication has exited successfully!\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice !Enter your choice again!!!");
		}
	}
	return EXIT_SUCCESS;
}


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

int getValues(int *myArray,int numberAccept,int maxSize)
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
	return numberAccept;
}

void bubbleSort(int arr[], int size) 
{
    int i, j;
    for (i = 0; i < size-1; i++) 
    {
        for (j = 0; j < size-i-1; j++) 
	{
            if (arr[j] > arr[j+1]) 
	    {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void mergeSort(int arr[], int size) 
{
    if (size < 2) 
    {
        return;
    }
    int mid = size / 2;
    int* left = (int*) malloc(mid * sizeof(int));
    int* right = (int*) malloc((size - mid) * sizeof(int));
    for (int i = 0; i < mid; i++) 
    {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) 
    {
        right[i - mid] = arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, mid, right, size - mid);
    free(left);
    free(right);
}

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) 
{
    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize) 
    {
        if (left[i] < right[j]) 
	{
            arr[k++] = left[i++];
        }
       	else 
	{
            arr[k++] = right[j++];
        }
    }
    while (i < leftSize) 
    {
        arr[k++] = left[i++];
    }
    while (j < rightSize) 
    {
        arr[k++] = right[j++];
    }
}

int binarySearch(int A[], int size, int element) 
{
   int start = 0;
   int end = size-1;
   while(start<=end) 
   {
      int mid = (start+end)/2;
      if( A[mid] == element) 
      {
         return mid;
      } 
      else if( element < A[mid] ) 
      {
         end = mid-1;
      }
      else 
      {
         start = mid+1;
      }
   }
   return -1;
}
