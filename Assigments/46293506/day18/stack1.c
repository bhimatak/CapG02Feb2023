yee Database is Empty
#include<stdlib.h>
#include<string.h>

#define MAX 5


typedef struct Employee
{
	int id;
	int age;
	char name[20];
	char gender[2];
	struct Employee *nLink;
	struct Employee *plink;
} EMP;
EMP *head=NULL;
int bottom=-1;
int top;
int scount=0;


void pushEmpDetails();
void popEmpDetails();
void dispEmpDetails();

int main()
{
	int ch=1,ch1;
	top = bottom;
	head = NULL;

	while(ch){
		printf("\n Welcome to Employee DataBase\n");
		printf("\n Select ");
		printf("\n1. add Employee Details");
		printf("\n2. Delete Employee Details");
		printf("\n3. Display Employee Details");
		printf("\n4. Exit");
		printf("\nchoice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:	pushEmpDetails();
				break;
			case 2: popEmpDetails();
				break;
			case 3: printf("\nEmployee Details as Follows\n");
				dispEmpDetails();
				break;
			case 4:
				printf("\nProgram Ends\n");
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("\nEnter the correct choice");
		}	
		printf("\nDo you want to stay in this page Y/S(1/0)\n");
		scanf("%d",&ch1);
	}
	printf("Thankyou for Using Application\n");

	printf("\n\n");
	return 0;
}


void pushEmpDetails()
{
	int id;
	int age;
	char name[20];
	char gender[2];

	if(scount == MAX){
		printf("\nStack is full\n");
		return;
	}
	EMP *sptr = (EMP *)malloc(sizeof(EMP));
	if(sptr == NULL)
	{
		printf("\nUnable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter name : ");
	scanf("%s",name);
	printf("\nEnter gender(M/F) : ");
	scanf("%s",gender);
	printf("\nEnter  id  : ");
	scanf("%d",&id);
	printf("\nEnter age : ");
	scanf("%d",&age);
	
	strcpy(sptr->name,name);
	strcpy(sptr->gender,gender);
	sptr->age=age;
	sptr->id=id;
	sptr->nlink = NULL;
	sptr->plink = NULL;

	if(head == NULL)
	{
		head = sptr;
		scount++;
		printf("\nDetails Updated\n");

	}
	else
	{
		head->nlink = sptr;
		sptr->plink = head;
	        head = head->nlink;	
		scount++;
		printf("\nDetails Updated\n");
	}

	
}


void popEmpDetails()
{
	EMP *temp=NULL;

	if(head == NULL)
	{
		printf("\nStack is Empty");
		return;
	}

	printf("\nPoped out Employee Details is: %s", head->name);
	temp = head;
	head = head->;

	free(temp);

}


void dispEmpDetails()
{
	
	EMP *temp = head;

	if(head == NULL)
	{
		printf("\n Employee Database is Empty\n");
		return;
	}

	while(temp != NULL)
	{
		printf("\nName:%s",temp->name);
		printf("\nID:%d",temp->id);
		printf("\nAge:%d",temp->age);
		printf("\nGender:%s",temp->gender);
		temp = temp->next;
	}

	
}
