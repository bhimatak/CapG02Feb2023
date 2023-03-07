#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define row 4
#define MAX_LEN 20

int getNames(char [][MAX_LEN]);
int displayNames(char [][MAX_LEN]);
int swap(char [][MAX_LEN],int);
int isVowel(char );
int hasVowel(char [][MAX_LEN],int);
char rmVowel(char (*)[MAX_LEN],int);

int main()
{
	char name[row][MAX_LEN];
	int index;
	int ch=1,ch1;

	printf("Enter 4  Names\n");
	getNames(name);
	
	while(ch)
	{
		printf("Enter \n 1.printNames \n 2.swapNames \n 3.isVowel or Not\n4.Remove Vowel\n5.exit \nchoice: ");
		scanf("%d",&ch1);
		switch(ch1)
		{
		
			case 1:displayNames(name);
			       break;
			case 2:printf("Enter a row value(0-3) to swap\n");
			       scanf("%d",&index);
	                       swap(name,index);
			       break;
			case 3:printf("Enter a row value of word to  know the isVowel\n");
			       scanf("%d",&index);
			       hasVowel(name,index);
			       break;
                        case 4:printf("Enter the row value to remove Vowels from a word\n");
			       scanf("%d",&index);
			       rmVowel(name,index);
			       break;
			case 5:exit(EXIT_SUCCESS);


			default:printf("Wrong choice\n");
		} 
      		
		printf("Do you want to continue Y/N(1/0)\n");
		scanf("%d",&ch);
	}
	return 0;
}

int getNames(char (*name)[MAX_LEN])
{
	int i;
	for(i=0;i<row;i++)
	{
		fgets(name[i],1024,stdin);
	}
}

int displayNames(char (*name)[MAX_LEN])
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
	
int isVowel(char name)
{
        int flag = 0;
	if(name=='a' || name=='e' || name=='i'
				||name=='o' || name=='u')
		{
			flag=1;
		}
		
	return flag;
}

int hasVowel(char (*name)[MAX_LEN],int index)
{
	int i,j;
	int flag =0;
	for(i=0;i<row;i++)
	{
		flag=0;
		if(i==index)
		{
			for(j=0;j<strlen(name[i]);j++)
		        {
				flag=isVowel(name[i][j]);
				if(flag ==1)
				{
					break;
				}
			}
			if(flag ==1)
				printf("\n%s has Vowels",name[i]);
			else
				printf("\n%s it doesnt have any Vowels",name[i]);
		  }    
		
	}
	return flag;
}

char rmVowel(char (*name)[MAX_LEN],int index)
{
	int i,j;
	int flag=0;
	for(i=0;i<row;i++)
	{
		if(i==index)
		{
			for(j=0;j<strlen(name[i]);j++)
	                {   
				flag = isVowel(name[i][j]);
			        if(flag!=1)
					printf("%c",name[i][j]);
		         }   
		}
	}
}

	
