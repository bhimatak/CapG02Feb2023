#include<stdio.h>
int main()
{
    int n,i=2,count=0;
	printf("\nEnter n: ");
	scanf("%d",&n);
	while(count<n)
	{
	    if(primeDigits(i))
		{
		   count++;
		   if(count==n)
		   {
		      printf("\n%d\n",i);
			  break;
		   }
		}
		i++;
	}
	return 0;
}
int primeDigits(int n)
{
    int j;
	while(n>0)
	{
	   j=n%10;
	   if(!isPrime(j))
	   {
	      return 0;
	   }
	   n=n/10;
	}
	return 1;
}
int isPrime(int n)
{
    int i;
	if(n==0 || n==1)
	{
	   return 0;
	}
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
		{
		   return 0;
		}
	}
	return 1;
}
