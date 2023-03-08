#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
		int age;
		float salary;
		char name[30];
};

struct node{
		struct emp data;
		struct node* prev;
		struct node* next;
};

struct stack
{
		struct node* top;
};
void init_stack(struct stack* s)
{
		s->top=NULL;
}

void push(struct stack* s,struct emp e)
{
		struct node* new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=e;
		new_node->prev=NULL;
		new_node->next=s->top;

		if(s->top!=NULL)
		{
				s->top->prev=new_node;
		}
		s->top=new_node;
}

struct emp pop(struct stack* s)
{
		if(s->top==NULL)
		{
			printf("Stack is empty\n");
			struct emp e ={" ",0,0};
			return e;
		}

		struct node* top_node=s->top;
		s->top=s->top->next;
		if(s->top!=NULL)
		{
			s->top->prev=NULL;
		}
		struct emp e=top_node->data;
		free(top_node);
		return e;
}

void display_emp(struct emp e)
{
		printf("Name: %s\n",e.name);
		printf("Age: %d\n",e.age);
		printf("Salary: %f\n",e.salary);
}

void display_stack(struct stack* s)
{
		printf("Present employees:\n");
		struct node* current_node =s->top;
		while(current_node!=NULL)
		{
				display_emp(current_node->data);
				current_node=current_node->next;
		}
}

int main()
{
	        int ch=1;
	        struct emp e; 
		struct stack s;
		init_stack(&s);

		while(ch)
		{

		printf("Enter details: \n");
		printf("Name: \n");
		scanf("%s",e.name);

		printf("Age: \n");
		scanf("%d",&e.age);

		printf("Salary: \n");
		scanf("%f",&e.salary);

		push(&s,e);

		printf("Do you push another employee(1/0): "); 
                scanf("%d",&ch);
		}

		display_stack(&s);
                ch=1;
		while(ch)
		{
			printf("Do you want to pop any employee(1/0): ");
                        scanf("%d",&ch);
			if(ch==1)
			{
				struct emp popped=pop(&s);
				
		                printf("Popped employee: \n");

		                display_emp(popped);
		        }
	        }		
		        display_stack(&s);

		        return 0;

}


