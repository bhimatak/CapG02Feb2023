#include<stdio.h>
#include<myHeader.h>
#include<stdlib.h>

int main()
{
	int numberDisplay;
	int numberAccept = 0;
	int numbersInserted = 0;
	int sum = 0;
	int count = 0;
	int item;
	int choice;
	int myArray[MAX_SIZE]= {0,};


	while(1)
	{

	        printf("\n\n1.Display the array\n2.Input elements into the array\n3.Sum of maximum and minimum element\n4.Count for a particular element in the array\n5.Reversing the contents of the array \n6.EXIT\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number of elements to display:");
				scanf("%d",&numberDisplay);
				display(myArray,numberDisplay);
				break;
			case 2:
				printf("\nEnter the number of elements you want to insert in the array");
				scanf("%d",&numberAccept);
				numbersInserted = getValues(myArray,numberAccept,MAX_SIZE);
				printf("\n%d numbers inserted in the array successfully",numbersInserted);
				break;
			case 3:
				sum = sumElement(myArray,MAX_SIZE);
				printf("Sum of maximum and minimum element in the array = %d",sum);
				break;
			case 4:
				printf("\nEnter the number to be counted:");
				scanf("%d",&item);
				count = myCount(myArray,item,MAX_SIZE);
				printf("\nCount of %d in the array = %d",item,count);
				break;
			case 5:
				myRev(myArray,MAX_SIZE);
				break;
			case 6:

				printf("\nApplication has exited successfully!\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice !Enter your choice again!!!");
		}
	}

	return(EXIT_SUCCESS);
}

