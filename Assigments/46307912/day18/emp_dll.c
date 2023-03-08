#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    int phn;
    double salary;
    char name[20];
};
typedef struct employee e;
struct node
{
    struct employee data;
    struct node* prev;
    struct node* next;
};

struct stack
{
    struct node* top;
};

void st_stack(struct stack* s)
{
    s->top=NULL;
}

void push(struct stack* s, struct employee e)
{
    struct node* node1=(struct node*)malloc (sizeof(struct node));
    node1->data=e;
    node1->prev=NULL;
    node1->next=s->top;
    if(s->top!=NULL)
    {
        s->top->prev=node1;
    }
    s->top=node1;
}

struct employee pop(struct stack* s)
{
    if(s->top==NULL)
    {
        printf("Stack is empty\n");
        //struct employee e ={"",0,0};
        //return e;
    }
    struct node* top_node=s->top;
    s->top=s->top->next;
    if(s->top!=NULL)
    {
        s->top->prev=NULL;
    }
    struct employee e=top_node->data;
    free(top_node);
    return e;
}

void disp_emp(struct employee e)
{
    printf("\nEmployee Name : %s\n",e.name);
    printf("Employee Phone number : %d\n",e.phn);
    printf("Employee Salary : %lf\n",e.salary);
}

void disp_stack(struct stack* s)
{
    printf("\nEmployee details in stack : \n");
    struct node* cur_node=s->top;
    while(cur_node !=NULL)
    {
        disp_emp(cur_node->data);
        cur_node=cur_node->next;
    }
}

int main()
{
    int ch=1;
    struct employee e;
    struct stack s;
    st_stack(&s);
    while(ch)
    {
        printf("Enter employee details : \n");
        printf("\nEmployee Name : ");
        scanf("%s",e.name);
        printf("\nEmployee Phone number : ");
        scanf("%d",&e.phn);
        printf("\nEmployee Salary : ");
        scanf("%lf",&e.salary);
        push(&s,e);
        printf("To continue (1/0) : ");
        scanf("%d",&ch);
    }

    disp_stack(&s);
    ch=1;
    while(ch)
    {
        printf("To pop (1/0) : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            struct employee popped=pop(&s);
            printf("\nDetails of popped employee : \n");
            disp_emp(popped);
        }
    }
    disp_stack(&s);
    return 0;
}
