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
	int rnum=0, rem, temp=0;
	int count;

	printf("\nEnter the given number: ");
	scanf("%d",&gnum);

	
	for(temp = gnum,rem=0, count=1;((temp!=0)&&(count<=3)) ;(temp = temp / 10),count++)
	{
		
		rem = temp%10;
		rnum = (rnum * 10)+rem;
		
	}

	printf("\nGiven No: %d\nRev No: %d\n",gnum,rnum);
	printf("\n%d times the loop has looped\n\n",count-1);


	return 0;
}