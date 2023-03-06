#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Emp{
	char name[30];
	int id;
	struct Emp *next;
	struct Emp *prev;
}Emp;


Emp* top =NULL;
Emp* head = NULL;
Emp *tail=NULL;

void push(){
	Emp *e = (Emp*)malloc(sizeof(Emp));
	printf("Enter name:");
	scanf("%s",e->name);
	printf("Enter employee id:");
	scanf("%d",&e->id);

	e-> next = top;
	e-> prev = NULL;

	if(top != NULL){
		top -> prev = e;
	}
	top=e;

	if(head == NULL){
		head = e;
	}
	tail=e;
}

void pop(){
	if(top == NULL){

		printf("\nEmployee table empty");
		return;
	}
	Emp* temp=top;
	top=top->next;

	if(top!=NULL){
		top -> prev = NULL;
	}

	free(temp);
}

void display(){
	Emp* temp=head;
	if(head==NULL){
		printf("\nEmpty stack");
		return;
	}

	printf("\n---Printing Employee details---");
	while(temp!=NULL){
		printf("\nName: %s\nId: %d",temp->name,temp->id);
		temp=temp->prev;
	}
}

int main(){
	int choice;
	while(choice != 4){
		printf("\n---Employee Applicartion---\n");
		printf("1. Add\n2.Remove\n3.Display\n4.Exit");
		printf("\n\nEnter choice\n");
		scanf("%d",&choice);

		switch(choice){
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: printf("\nExiting..");
				break;
			default: printf("\nInvalid");
		}
	}

	return 0;
}
