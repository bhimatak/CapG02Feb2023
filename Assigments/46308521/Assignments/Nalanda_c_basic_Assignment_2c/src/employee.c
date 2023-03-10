#include<stdio.h>
#include<myHeader.h>
#include<stdlib.h>

int main()
{

	int choice;

	while(1)
	{

	        printf("\n\n1.Input your name,gender, age and salary in global variable.\n2.Display name, gender, age and salary stored in global variable.\n3.Input your name, gender, age and salary in structure.\n4.Display name, gender, age and salary stored in structure.\n5.EXIT\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				read();
				break;
			case 2:

				disp();
				break;
			case 3:
				readStructure();
				break;
			case 4:
				dispStructure();
				break;
			case 5:

				printf("\nApplication has exited successfully!\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice !Enter your choice again!!!");
		}
	}

	return(EXIT_SUCCESS);
}
