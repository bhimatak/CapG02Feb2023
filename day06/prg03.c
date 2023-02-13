/*

for st

Syntax:
	
	for(counter sec(init);condition sec;counter)
	{
		block of for sts
	}

	
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
	}

*/

#include <stdio.h>

int main()
{

	int gnum=0;
	int rnum=0, rem=0, temp=0;

	printf("\nEnter the given number: ");
	scanf("%d",&gnum);
	
	for(temp = gnum;temp!=0;(temp = temp / 10))
	{
		rem = temp%10;
		rnum = (rnum * 10)+rem;
	}

	printf("\nGiven No: %d\nRev No: %d\n",gnum,rnum);


	return 0;
}