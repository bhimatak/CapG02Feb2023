#include<stdio.h>

#include"myHeader.h"

int uniqueNumber(int num)
{
	int key;
	int rem,it=0,lt=0,jt,kt,arr[100],arr1[100];
	int flag=0;
	while(num!=0)
	{
		rem =num%10;
		arr[it]=rem;
		it++;
		num=num/10;
	}
		
	for(jt=0;jt<it;jt++)
	{
		for(kt=0;kt<it;kt++)
		{
			if(arr[jt]==arr[kt] && jt!=kt)
			{
				flag=1;
				break;
			}
		
		}
		if(flag!=1)
		{
			printf("%d ",arr[jt]);
		} 
	}
printf("\n\n");
}
