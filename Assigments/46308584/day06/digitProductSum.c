#include<stdio.h>
int main()
{
	int n,sum=0,temp,prod=1,rem;
	printf("\nEnter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		if(rem!=0)
		{
			prod=prod*rem;
		}
		n=n/10;
	}
	printf("SUM=%d\n",sum);
	printf("PRODUCT=%d\n",prod);
	return 0;
}
