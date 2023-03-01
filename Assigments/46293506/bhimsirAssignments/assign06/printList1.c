#include<stdio.h>
#include"myHeader.h"

int printList1()
{
        int flag = productEqOrNot(getNumber());
	if(flag==1)
	//if(productEqOrNot(getNumber())==1)
		printf("YES\n");
	else
		printf("NO\n");
}
