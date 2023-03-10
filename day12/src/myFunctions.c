#include <myHeader.h>
#include <stdio.h>

/* dispArr:  prints the list */
void dispArr(int *arr, int aSize)
{
	int it;
	printf("\nList is :\n");
	for(it=0;it<aSize;it++)
		printf("%d ",arr[it]);
	printf("\n\n");
}

/* 
getValArr: set/get the values from the stdin and store it
in the array
*/
void getValArr(int *arr, int aSize)
{
	int it;
	printf("\nEnter the values of the array of Size %d:", aSize);
	for(it=0;it<aSize;it++)
		scanf("%d",&arr[it]);
	printf("\nSetting the values is Done!\n\n");
}

/*
sortAArr: sort the array/list in ascending order
*/
void sortAArr(int *arr, int aSize)
{
	int it1,it2, temp;

	for(it1=0;it1<aSize;it1++)
	{
		for(it2=it1;it2<aSize;it2++)
		{
			if(arr[it1]>arr[it2])
			{
				temp = arr[it2];
				arr[it2] = arr[it1];
				arr[it1] = temp;
			}
		}
	}

}



void sortDArr(int *arr, int aSize)
{
	int it1,it2, temp;

	for(it1=0;it1<aSize;it1++)
	{
		for(it2=it1;it2<aSize;it2++)
		{
			if(arr[it1]<arr[it2])
			{
				temp = arr[it2];
				arr[it2] = arr[it1];
				arr[it1] = temp;
			}
		}
	}

}


/* String functions for the list */

void dispList(char str[row][BUFF], int rows)
{
	int it;
	printf("\nList is:\n");
	for(it=0;it<rows;it++)
		printf("\n%s",str[it]);
	printf("\n\n");
}


void setList(char str[row][BUFF], int rows)
{
	int it;
	printf("\nEnter the %d Strings ",rows);
	for(it=0;it<rows;it++)
	{
		fgets(str[it],BUFF,stdin);
		str[it][strlen(str[it])-1] = '\0';
	}
	printf("\nSetting the values is Done!\n");

	//return str;
}


void sortStrAsc(char str[row][BUFF], int rows)
{

	int it1, it2;
	char temp[BUFF];

	for(it1=0;it1<rows;it1++)
	{
		for(it2=it1;it2<rows;it2++)
		{
			if(strcmp(str[it1],str[it2])>0)
			{
				strcpy(temp, str[it2]);
				strcpy(str[it2], str[it1]);
				strcpy(str[it1],temp);
			}
		}
	}
}