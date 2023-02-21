#include<stdio.h>

void display(int *,int);
void sort(int *,int);
int main()
{
	int array[10];
	int *pArray;
	int iValue;
	pArray = array;

	printf("Enter the values in the array:\n");
	for(iValue=0;iValue<10;iValue++)
	{
		scanf("%d",pArray);
		pArray++;
	}
	printf("\nValues in the array before sorting:\n");
	display(array,10);
	printf("\nValues in the array after sorting:\n");
	sort(array,10);
	display(array,10);
	return 0;
}

void sort(int *pArray,int size)
{
	int outer,inner,temp;
	for(outer=0;outer<size;outer++)
	{
		for(inner=outer+1;inner<size;inner++)
		{
			if(*(pArray+inner) < *(pArray+outer))
			{
				temp = *(pArray+outer);
				*(pArray+outer) = *(pArray+inner);
				*(pArray+inner) = temp;
			}
		}
	}
}

void display(int *pArray,int size)
{
	int iValue;
	for(iValue=0;iValue<size;iValue++)
	{
		printf("%d\t",*(pArray+iValue));
	}
	printf("\n\n");
}
