/*
Ask color and print it using loop and switch
*/

#include <stdio.h>

int main()
{

	int colour;
	int choice=1;

	while(choice)
	{
		printf("\nEnter the colour of your choice (1-5): ");
		colour = 0;
		scanf("%d",&colour);
		switch(colour)
		{
			case 1:
					printf("\nYou have got Red Colour");
					break;
			case 2:
					printf("\nYou have got Blue Colour");
					break;
			case 3:
					printf("\nYou have got Orange Colour");
					break;
			case 4:
					printf("\nYou have got Black Colour");
					break;
			case 5:
					printf("\nYou have got White Colour");
					break;
			default:
					printf("\nYou have enter colour which is out of range");

		}

		printf("\nDo you want to continue (1/0)\nChoice: ");
		scanf("%d",&choice);


	}

	printf("\nThank you\n\n");

	return 0;
}