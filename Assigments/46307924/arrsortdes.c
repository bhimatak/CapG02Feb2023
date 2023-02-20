#include<stdio.h>
int main()
{
	int arr[100],temp,size,i,j;
	int *ptr;
	ptr=arr;                         /*       ptr=&arr[0];     */
	printf("Enter the size of the array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr);        
		ptr++;
	}
	ptr=arr;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The elements in descending order are ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",*ptr);
		*ptr++;
	}
	return 0;
}



