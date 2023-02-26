#include"myHeader.h"
#include<stdio.h>

int productEqOrNot(int num)
{
	int rem;
	int prod=1;
	int it=0;
	int EvPlace=1;
	int OdPlace=1;
        int flag;

	while(num!=0)
	{
		rem = num%10;
	        if(it%2==0)
		{
			EvPlace = EvPlace * rem;
			
		}
	       else
		{
			OdPlace = OdPlace * rem;
		}
		num=num/10;
		it++;
	}
	if(EvPlace == OdPlace)
	{
		flag = 1;
	}
	
	else
	{
		flag =0;
	}
	return flag;

}

