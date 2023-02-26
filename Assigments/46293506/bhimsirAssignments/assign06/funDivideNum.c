#include"myHeader.h"
#include<stdio.h>

int divideNumber(int num)
{
	int it,jt,kt,lt,sum,count =0;;
	for(it=1;it<=num;it++)
	{
		for(jt=it;jt<=num;jt++)
		{	
			for(kt=jt;kt<=num;kt++)
		        {
					for(lt=kt;lt<=num;lt++)
					{
		                                  sum=it+jt+kt+lt;
			                               if(sum==num)
						       {
							       count++;
						       }
					}
			}	     

		}
	}
	return count;
}


