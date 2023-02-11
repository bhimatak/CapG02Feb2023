/*

nested if else st

syntax: 
	if(cond1)
	{
		//if block cond1
		if(cond2)
		{
			st of cond2
		}
		else
		{
			else st of cond2
		}

		st of cond1
	}
	else
	{
		//else block
		if(cond3)
		{
			st of cond3
		}
		else
		{
			
		}
	}


*/

// to make a tea

#include <stdio.h>

int main()
{
	int gs, tp, w;

	printf("\nDo you have water?(1/0):");
	scanf("%d",&w);
	if(w)
	{
		printf("\nDo you have a gas stove?(1/0):");
		scanf("%d",&gs);
		if(gs==1)
		{
			printf("\nBoil the water");
			printf("\nDo you have a tea powder?(1/0):");
			scanf("%d",&tp);
			if(tp)
			{
				printf("\nAdd tea powder to the boiling water");
				printf("\nTantada ! Tea is ready!\n");
			}
			else
			{
				printf("\nDrink hot water idiot");

			}

		}
		else
		{
			printf("\nDrink Cold water idiot");
		}
	}
	else
	{
		printf("\nBreath air idiot\n");
	}

	printf("\nBye\n\n");

	return 0;
}