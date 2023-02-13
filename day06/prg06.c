/*

nesting of looping sts


while(cond1)
{
	block of sts for outer loop
	while(cond2)
	{
		block of sts for inner loop
	}
}


for(;;)
{
	sts of outer loop
	for(;;)
	{
		sts for inner loop
	}
}


do 
{
	
	sts for outer loop
	do
	{
		sts for inner loop
	}while(cond2);

}while(cond1);

*/

/*

Write a program to Count number of ways to divide a number
 in 4 parts.

 5 

 counter => 4 diff counters

 i=1,j=1,k=1,l=2 => 1 count
 i=1,j=1,k=1,l=3-5 => 1 count

 i=1,j=1,k=2,l=1 => 1 count




*/

#include <stdio.h>

int main()
{

	int sum =0, i,j,k,l;
	int count=0, gnum;

	printf("\nEnter the number: ");
	scanf("%d",&gnum);

	for(i=1;i<=gnum;i++) //outer loop//i's loop
	{
		for(j=i;j<=gnum;j++) //j's loop
		{
			for(k=j;k<=gnum;k++) //k's loop
			{
				for(l=k;l<=gnum;l++)
				{
					sum = i+j+k+l;
					if(sum == gnum)
					{
						printf("\ni=%d, j=%d, k=%d, l=%d",i,j,k,l);
						count++;
					}
				}
			}
		}
	}

	printf("\nCount = %d\n\n", count);

	return 0;

}