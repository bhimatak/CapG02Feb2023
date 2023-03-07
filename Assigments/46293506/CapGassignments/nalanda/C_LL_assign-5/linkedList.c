#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct word
{
	char word[20];
	struct word *nlink;
};
typedef struct word WORD;

WORD *getWord(WORD *,WORD *);
void displayList(WORD *);

int main()
{

	int ch1=1;
        WORD *head=NULL;
        WORD *temp=NULL;
	while(ch1)
	{
		temp=getWord(temp,head);
		if(head==NULL)
			head=temp;
		printf("do you want add more\n");
		scanf("%d",&ch1);

	}
	temp =head;
	displayList(temp);
		

	return 0;
}

WORD *getWord(WORD *temp,WORD *head)
{
	WORD *newnode;
	char *token;
	temp =NULL;
	head =NULL;
	
	char word[1024];
	FILE *filename;

	filename =fopen("file.txt","r+");
	
	if(filename == NULL)
	{
		perror("file not opening\n");
		exit(EXIT_FAILURE);
	}
	printf("File Opened Successully\n");
	newnode = (WORD *)malloc(sizeof(WORD));

	if(newnode ==NULL)
	{
		perror("Malloc Failed\n");
		exit(EXIT_FAILURE);
	}
	fgets(word,1024,filename);
       
	token = strtok(word," ");
	while(token!=NULL)
	{
		token = strtok(NULL," ");
	}
	puts(token);
	strcpy(newnode->word,token);
	newnode->nlink = NULL;

	if(head==NULL)
	{
		head = newnode;
		temp = newnode;
	}
	else
	{
		temp->nlink = newnode;
		temp = temp->nlink;
	}
	printf("Word added\n");

	return temp;
}

void displayList(WORD *temp)
{
	if(temp == NULL)
	{
		printf("List is Empty\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Words are\n");
		while(temp!=NULL)
		{
			printf("%s ",temp->word);
			if(temp->nlink==NULL)
				break;
			temp = temp->nlink;
		}
	}
}

