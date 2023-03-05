#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX_LENGTH 80
#define row 4

int getName(char [][MAX_LENGTH]);

int getFName(char [][MAX_LENGTH],char [][MAX_LENGTH],int *);
int getLName(char [][MAX_LENGTH],char [][MAX_LENGTH],int *);

int printFName(char [][MAX_LENGTH]);
int printLName(char [][MAX_LENGTH]);

int main()
{
        char arr[50][MAX_LENGTH];

	int ch;
	int ch1=1;
        getName(arr);
	
	
	while(ch1)
	{
		printf("\n Enter \n 1. FIRST NAME \n 2. LAST NAME\n 3.EXIT \n");
	        scanf("%d",&ch);
		switch(ch)
		{
			case 1:printFName(arr);
		               break;
		        case 2:printLName(arr);
		               break;
		        case 3:return EXIT_FAILURE;
		        default:printf("WRONG CHOICE\n");
                        

		}
	      printf("do you want continue Y/N (1/0)\n");
              scanf("%d",&ch1);
	}


	return 0;

}

int getName(char (*name)[MAX_LENGTH])
{
	int i;
	int j;
        printf("Enter a %d name \n",row);
	for(i=0;i<row;i++)
	{
		fgets(name[i],1024,stdin);
	}
}

int getFName(char (*str)[MAX_LENGTH],char(*fname)[MAX_LENGTH],int *ptr)
{
	int i;
	char *token;
	int count=0;
        printf("FIRST Names Are\n");
	for(i=0;i<4;i++)
	{
		token=strtok(str[i]," ");
		strcpy(fname[i],token);
		
		count++;
	}
	*ptr =count;
}

int getLName(char (*str)[MAX_LENGTH],char (*lname)[MAX_LENGTH],int *ptr)
{
	int i,j;
	char *token;
	int count=0;
	printf("Last Name are\n");
	for(i=0;i<row;i++)	
	{
		token = strtok(str[i]," ");
		token = strtok(NULL,"\n");
		strcpy(lname[i],token);
		count++;
	}

	*ptr = count;
}

int printFName(char (*name)[MAX_LENGTH])
{
	int i;
	char fname[row][MAX_LENGTH];
        int count =0;

	getFName(name,fname,&count);

	printf("First names are !!\n");
	for(i=0;i<row;i++)
	{
		printf("%s\n",fname[i]);
	}
	printf("\n\n");
	printf("First Name count:%d\n",count);
}

int printLName(char (*name)[MAX_LENGTH])
{
	int i;
	char lname[row][MAX_LENGTH];
	int count =0;

	getLName(name,lname,&count);
	
	printf("Last Names are!!\n");
	for(i=0;i<row;i++)
	{
		printf("%s\n",lname[i]);
	}
	printf("\n\n");
	printf("Last Name count:%d\n",count);
}




