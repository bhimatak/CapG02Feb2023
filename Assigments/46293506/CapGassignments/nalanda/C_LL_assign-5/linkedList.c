#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
	char word[20];
	struct node *next;
	struct node *prev;
};
typedef struct node WORD;

WORD *getWord(WORD *);
void displayList(WORD *);
int countWord(WORD *);
int deleteWord(WORD *);
int deleteList(WORD *);
int main()
{
	
	WORD *temp = NULL;
	WORD *head = NULL;

	head=getWord(temp);
        temp =head;
/*	displayList(temp);
        temp = head;
        countWord(temp);
	temp=head;
        deleteWord(temp);*/
	deleteList(temp);
	temp = head;
	displayList(temp);
	return 0;
}


WORD *getWord(WORD *temp)
{
	temp=NULL;
	WORD *head=NULL;
	FILE *filename;
	char line[1024];
	char *token;
	WORD *newnode;

	filename = fopen("file.txt","r");
	if(filename ==NULL)
	{
		perror("file opening Error\n");
		exit(EXIT_FAILURE);
	}
	fgets(line,1024,filename);
	puts(line);

	token = strtok(line," ");
	while(token!=NULL)
	{
		newnode = (WORD *)malloc(sizeof(WORD));
		if(newnode == NULL)
		{
			perror("Malloc Failed to allocate memory\n");
			exit(EXIT_FAILURE);
		}
		strcpy(newnode->word,token);
		if(head == NULL)
		{
			newnode->next=NULL;
			newnode->prev=NULL;
			temp = newnode;
			head =newnode;
		}
		else
		{
			temp->next = newnode;
			newnode->prev=temp;
			temp=temp->next;
		}
		token = strtok(NULL," ");
	}
	return head;
}

void displayList(WORD *temp)
{
	if(temp==NULL)
	{
		printf("List is Empty\n");
		exit(EXIT_FAILURE);
	}
	printf("List are\n");
	while(temp!=NULL)
	{
		printf("%s\n",temp->word);
		if(temp->next==NULL)
			break;
		temp=temp->next;
	}
}


int countWord(WORD *temp)
{
	char word[20];
	int count=0,count1=0;
	int flag=0;
	int i;
	char word1[strlen(word)-1];

	printf("Enter the Word to Search\n");
        fgets(word,20,stdin);
	for(i=0;i<=strlen(word)-1;i++)
	{
		if(word[i]!='\n')
			word1[i]=word[i];
	}
	while(temp!=NULL)
	{
		if(strcmp(temp->word,word1)==0)
		{
			count++;
			flag=1;
		}
		temp = temp->next;
		
	}
	if(flag==1)
	{
		printf("%s  found %d times\n",word,count);
		return EXIT_SUCCESS;
	}
	printf("\n %s not found ",word);
       printf("\n");
}
	


int deleteWord(WORD *temp)
{
	WORD *temp1 = NULL;
	int i;
	char word[20];
	char ch[20];
	int found = 0;


	printf("enter a word to delete\n");
	scanf("%s",word);
     
	while(temp!=NULL)
	{
		if(strcmp(temp->word,ch)==0)
		{
			found =1;
			break;
		}
		temp = temp->next;
	}

	        if(found)
	        {
			temp1 = temp->next;
		        temp = temp->prev;
		        temp->next = temp1;
			printf("Element Deleted\n");
			return EXIT_SUCCESS;
		}
	printf("word Not found\n");
}


int deleteList(WORD *temp)
{
	WORD *temp1;
	while(temp!=NULL)
	{
		temp1 = temp;
	
		free(temp1);
		temp = temp->next;
	}
}


