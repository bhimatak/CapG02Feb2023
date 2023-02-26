#include"myHeader.h"
#include<stdio.h>

int isPrime(int num)
{
	int i,flag=0;
	if(num<=1)
		flag=1;
	if(flag!=1)
	{
		for(i=2;i<num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
			}
		}
	}
return flag;

}

