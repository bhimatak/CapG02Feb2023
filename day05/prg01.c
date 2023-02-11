/*

Control sts:

decision making and branching sts;

1. if
2. if else
3. else if ladder
4. nested if else
5. swtich st


1. if:
	Syntax: 
		if(cond)
		{
			if block sts 
		}

	if cond=> true/flase
	

2. if else... st:

	syntax:
		if(cond)
		{
			if block sts
		}
		else
		{
			else block sts
		}

3. else if ladder:

	Syntax:
		if(cond1)
		{
			if block cond1 sts
		}
		else if(cond2)
		{
			else if block cond2 sts
		}
		else if(cond3)
		{
			else if block cond3 sts
		}
		..
		..
		..
		else
		{
			else block sts
		}


*/

#include <stdio.h>


int main()
{
	/*
	int a=150;
	int b=20;

	if(a>b)
	{
		printf("\nA is biggest\n");
	}
	else
	{
		printf("\nB is biggest\n");
	}

	*/

	int speed=0;
	printf("\nEnter the speed you are riding: ");
	scanf("%d",&speed);

	if((speed>100) && (speed <=150))
	{
		printf("\nFuel consumed is more (less economy)");
		printf("\nWarning: Hitting a red line\nWarning: Beaware of speed breakers\n");
		printf("\nWarning: There is somebody waiting for you @ home\n");
	}
	else if((speed>60) && (speed <=100))
	{
		printf("\nFuel consumed is moderate");
		printf("\nWarning: try to reduce the speed for economy\n");
	}
	else if((speed>30) && (speed <= 60))
	{
		printf("\nEconomical Ride!");
		printf("\nThank you for riding in a safe zone\n");
	}
	else if((speed> 10) && (speed <=30))
	{
		printf("\nFuel consumed is more as you are riding with the first gear");
		printf("\nChange the gear!");
	}
	else
	{
		printf("\nYour bike is in still mode");
		printf(" or not started\n");
		printf("\nStart your Engine!");
	}

	printf("\nThank you for using this S/W\n\n");

	printf("\nBye\n");

	return 0;
}