#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Words
{
	char word[20];
	struct Words *next;
};

typedef struct Words WORD;

void readFile();
void display();
int wordSearch();
void deleteWord();
void freeList();

WORD *head = NULL;
WORD *tail = NULL;

int main()
{
	int count = 0;

	readFile();
	display();
	count = wordSearch();
	printf("\nOccurence of word searched = %d",count);
	deleteWord();
	freeList();
	printf("\n\n");
}

void readFile()
{
	WORD *newNode;
	char file[40];
	char word[40];
	
	printf("\nEnter the file name to be read:");
	scanf("%s",file);
	FILE *fptr = fopen(file,"r");
	if(fptr == NULL)
	{
		perror("fopen error");
		exit(EXIT_FAILURE);
	}
	while(fscanf(fptr,"%s",word)!=EOF)
	{
		newNode = (WORD *)malloc(sizeof(WORD));
                if(newNode == NULL)
                {
                        printf("\nMemory cannot be allocated");
                        exit(EXIT_FAILURE);
                }
		strcpy(newNode->word,word);
        	newNode->next = NULL;
        	if(head == NULL)
        	{
            		head=newNode;
            		tail=newNode;
        	}
        	else
        	{
            		tail->next=newNode;
            		tail= tail->next;
		}
	}
	fclose(fptr);
}

void display()
{
	WORD *temp;
        temp = head;

	if(head == NULL)
	{
		printf("\nList is already empty!");
		exit(EXIT_FAILURE);
	}
        while(temp != NULL)
        {
            printf("%s\n",temp->word);
            temp = temp->next;
        }
	printf("\n\n");
}

int wordSearch()
{
	char search[50];
	int count = 0;

	if(head == NULL)
	{
		printf("\nList is already empty!");
		exit(EXIT_FAILURE);
	}
	printf("\nEnter the word to be searched in the linked list:");
	scanf(" ");
	fgets(search,1024,stdin);
	search[strlen(search)-1] = '\0';
	WORD *temp;
	temp = head;
	while(temp != NULL)
	{
		if(strcmp(search,temp->word) == 0)
		{
			count += 1;
		}
		if(temp->next == NULL)
		{
			break;
		}
		temp = temp->next;
	}
	return count;
}

void deleteWord()
{
	WORD *temp = head;
	WORD *prev = head;
	char search[50];
	int flag = 0;
	
	if(head == NULL)
	{
		printf("\nList is already empty!");
		exit(EXIT_FAILURE);
	}
	printf("\nEnter the word to be deleted:");
	scanf(" ");
	fgets(search,1024,stdin);
	search[strlen(search)-1] = '\0';

	while(temp!=NULL)
	{
		if(strcmp(search,temp->word) == 0)
		{
			prev->next = temp->next;
			temp->next = NULL;
			flag = 1;
			break;
		}
		if(temp->next == NULL)
		{
			break;
		}
		prev = temp;
		temp = temp->next;
	}
	if(flag == 1)
	{
		printf("\nWord found and deleted successfully!");
	}
	else
	{
		printf("\nWord cannot be found!");
	}
}

void freeList()
{
	free(head);
	free(tail);
}
