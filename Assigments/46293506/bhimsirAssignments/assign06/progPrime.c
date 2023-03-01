#include<stdio.h>
#include"myHeader.h"

int main()
{
	int res,num;

        num=getNumber();
	res=isPrime(num);

	if(res==0)
		printf("%d is a Prime_Number\n",num);
	else
		printf("%d is not a Prime_Number\n",num);

	return 0;
}


