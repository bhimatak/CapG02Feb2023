#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define row 4
#define MAX_LEN 20

int getNames(char [][MAX_LEN]);
int printNames(char [][MAX_LEN]);
int swap(char [][MAX_LEN],int);
int isVowel(char [][MAX_LEN]);

int main()
{
	char name[row][MAX_LEN];
	int index;
	int ch=1,ch1;
	getNames(name);
	isVowel(name);
/*	while(ch)
	{
		printf("Enter \n 1.printNames \n 2.swapNames \n 3.exit \n");
		scanf("%d",&ch1);
		switch(ch1)
		{
		
			case 1:printNames(name);
			       break;
			case 2:printf("Enter a index value(0-3) to swap\n");
			       scanf("%d",&index);
	                       swap(name,index);
			       break;
			case 3:return EXIT_FAILURE;

			default:printf("Wrong choice\n");
		} 
      		
		printf("Do you want to continue Y/N(1/0)\n");
		scanf("%d",&ch);
	}*/
	return 0;
}

int getNames(char (*name)[MAX_LEN])
{
	int i;
	for(i=0;i<1;i++)
	{
		fgets(name[i],1024,stdin);
	}
}

int printNames(char (*name)[MAX_LEN])
{
	int i;
	for(i=0;i<row;i++)
	{
		printf("%s",name[i]);
	}
	printf("\n\n");
}

int swap(char (*name)[MAX_LEN],int index)
{
	char temp[MAX_LEN];
        strcpy(temp,name[0]);
	strcpy(name[0],name[index]);
        strcpy(name[index],temp);
		
	printf("ELements Swapped\n");
}
	
int isVowel(char (*name)[MAX_LEN])
{
	int i,j;
	int flag=0;
	for(i=0;i<1;i++)
	{
		for(j=0;j<strlen(name[i])-1;j++)
		{
			if((strcmp(name[i],"a")==0)||(strcmp(name[i],"e")==0)
		           ||(strcmp(name[i],"o")==0)||(strcmp(name[i],"i")==0)
		             || (strcmp(name[i],"u")==0))
			{
				printf("%c\n",name[i][j]);
			        flag=1;
							
			}
		 }
	}
	printf("%d",flag);
	return flag;
}
