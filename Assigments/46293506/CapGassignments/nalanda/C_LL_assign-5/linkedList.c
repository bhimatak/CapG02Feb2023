#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char word[20];
	struct node *next;
};
typedef struct node WD;

WD *insert(WD *);
void display(WD *);
int main()
{
	WD *temp =NULL;
	WD *head =NULL;
        int ch =1;
	while(ch)
	{
		temp =insert(temp);
		if(head==NULL)
			head =temp;

		printf("word inserted\n");
		printf("\n do you want continue :");
		scanf("%d",&ch);
	}
	display(head);
	return 0;
}
char getWord()
{
	char word[20];
	FILE *filename;
	filename = fopen("file.c","r");
	if(filename==NULL)
	{
		perror("Failed open file\n");
		exit(EXIT_FAILURE);
	}
	while(fgets(word,"%s",word))
}
WD *insert(WD *temp)
{
	char word[20];
	WD *newnode;
	FILE *filename;
	filename = fopen("file.txt","r");
	if(filename ==NULL)
	{
		perror("File fail to open\n");
		exit(EXIT_FAILURE);
	}
	
	newnode = (WD *)malloc(sizeof(WD));

	if(newnode == NULL)
	{
		perror("Malloc failed\n");
		exit(EXIT_FAILURE);
	}
        fgets(word,1024,filename);

	strcpy(newnode->word,word);
	newnode->next = NULL;

	if(temp == NULL)
	{
		temp = newnode;
	}
	else
	{
		temp->next =newnode;
		temp = temp->next;
	}
	return temp;
}

void display(WD *temp)
{
	while(temp!=NULL)
	{
		printf("%s ",temp->word);
		if(temp->next == NULL)
			break;
		temp = temp->next;
	}
	printf("\n");
}
