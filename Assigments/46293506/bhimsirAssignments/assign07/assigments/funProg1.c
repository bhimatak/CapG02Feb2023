#include<stdio.h>
#include"myHeader.h"

int sumOfPrime(int num)
{
	int i,j,sum;
	int count=0;
	for(i=0;i<=num;i++)
	{
		for(j=i;j<=num;j++)
		{
	         	if((isPrime(i)==0) && (isPrime(j)==0))
					{
						sum = i +j ;
						if(sum==num)
						{
							printf("%d :%d + %d\n",sum,i,j);
							count++;
					        }
					}

		}
	}
	if(count>0)
	{
		printf("%d\n",count);
	}
	else
	{
		printf("-1\n");
	}
}



int isPrime(int num)
{
	int flag=0,i;
	if(num<2)
	{
		flag=1;
	}
	if(flag!=1)
	{
		for(i=2;i<num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
	}
	return flag;
}


