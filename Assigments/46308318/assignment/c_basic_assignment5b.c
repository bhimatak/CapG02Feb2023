#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFF 1024

typedef struct Person
{
    int height;
    int age;
    char name[BUFF];
    struct Person *next;
}PER;

PER *readPerson(PER *);
void displayNodes();
PER *copyPerson();
void freeNode();

PER *head = NULL;
PER *temp = NULL;

int main()
{
    PER *newNode=NULL;
    PER *last = NULL;
    PER *person = NULL;
    int ch=1;
    
    while(ch)
    {
        
        newNode = (PER *)malloc(sizeof(PER));
	PER *person = readPerson(newNode);
        printf("Do you want to add a new record(1/0)");
        scanf("%d",&ch);
    }
    printf("\n\n=========Details of all the  persons stored in linked list===========\n\n");
    displayNodes();
    printf("\n\n==========Details of the Last Person==========\n\n ");
    last = copyPerson();
    printf("\nHeight: %d",last->height);
    printf("\nAge: %d",last->age);
    printf("\nName: %s\n\n",last->name);
    free(last);
    freeNode();
    return 0;
}

PER *readPerson(PER *newNode)
{

    	int height,age;
    	char nm[BUFF];

	
        printf("Enter the height\n");
        scanf("%d",&height);
        printf("Enter age\n");
        scanf("%d",&age);
        printf("Enter the name\n");
	scanf(" ");
        scanf("%[^\n]s",nm);
        if(newNode == NULL)
        {
            printf("Memory allocation failed");
            exit(EXIT_SUCCESS);
        }
        newNode->height=height;
        newNode->age=age;
        strcpy(newNode->name,nm);
        newNode->next = NULL;
        if(head == NULL)
        {
            head=newNode;
            temp=newNode;
        }
        else
        {
            temp->next=newNode;
            temp=temp->next;
        }
	return newNode;
}

void displayNodes()
{
	PER *temp1;
        temp1 = head;
        while(temp1 != NULL)
        {
            printf("Height = %d\n",temp1->height);
            printf("Age = %d\n",temp1->age);
            printf("Name = %s\n",temp1->name);
            printf("\n\n");
            temp1 = temp1->next;
        }
}

PER *copyPerson()
{
	PER *person = (PER *)malloc(sizeof(PER));

	(person->age) = (temp->age);
	strcpy(person->name,(temp->name));
	(person->height) = (temp->height);
	(person->next) = NULL;

	return person;
}

void freeNode()
{
	free(head);
	free(temp);
}
