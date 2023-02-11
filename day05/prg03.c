/*

switch st

syntax:

	cond can be either an interger or single char constant
	Note: the cond in switch can't have strings or floats

	switch(cond)
	{
		case 1:
				sts of case1;
				break;
		case 2:
				sts of case2;
				break;
		....
		....
		....
		case n:
				sts of casen;
				break;
		default:
				sts of default
				break; //optional		

	}	

	switch(cond)
	{
		case 'a':
				sts of case'a';
				break;
		case 'b':
				sts of case'b';
				break;
		....
		....
		....
		case n:
				sts of case n;
				break;
		default:
				sts of default
				break; //optional		

	}			

*/

#include <stdio.h>

int main()
{
	int number;

	printf("\nEnter any value between (3-7): ");
	scanf("%d",&number);
	switch(number)
	{
		case 3:
			printf("\nYou have entered %d number", number);
			break;
		case 4:
			printf("\nYou have entered %d number", number);
			break;
		case 5:
			printf("\nYou have entered %d number", number);
			break;
		case 6:
			printf("\nYou have entered %d number", number);
			break;
		case 7:
			printf("\nYou have entered %d number", number);
			break;
		default:
			printf("\nYou have entered number which is out of range!");

	}

	printf("\nBye\n\n");

	return 0;

}