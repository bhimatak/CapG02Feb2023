#include"myHeader.h"
#include<stdio.h>

int sumProdGN(int num)
{
	int rem;
	int sum=0,prod =1;
	while(num!=0)
   	{
		rem=num%10;
		sum=sum+rem;
		prod =prod * rem;
	        num=num/10;
	}
printf(" number's\n sum:%d\n product:%d\n",sum,prod);

}

