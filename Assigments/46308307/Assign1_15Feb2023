#include<stdio.h>

int isPrime(int);

int main()
{
	int num,count=0,i=2,k,flag=0,rem;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	do
	{
		if(i<=9)
		{
			flag=isPrime(i);
			if(flag==0)
			{
				count++;
			}
			if(count==num)
			{
				printf("%d\n",i);
				break;
			}
		}
		else{
				k=i;
				while(k>0)
				{
					rem=k%10;
					flag=isPrime(rem);
					k=k/10;
					if(flag==1)
					{
						break;
					}
				}
				if(flag==0)
					count++;
				if(count==num)
				{
					printf("%d\n",i);
					break;
			    }
			}
	i++;
	}while(1);
	return 0;
}
int isPrime(int gNum)
{
	int flag=0,it;

	if((gNum==0) || (gNum==1))
	{
		flag=1;
	}
	if(flag!=1)
	{
		for(it=2;it<gNum;it++)
		{
			if(gNum%it==0)
			{
				flag=1;
				break;
			}
		}
	}
	return flag;
}
