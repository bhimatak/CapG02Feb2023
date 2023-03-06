#include <common.h>
#include <driver.h>

DRIVER* signUpDriver(DRIVER *head)
{
	int ch;
	DRIVER *newNode = NULL;
	DRIVER *tmpNode = head;

	newNode = (DRIVER*)malloc(sizeof(DRIVER));
	newNode->next = NULL;
	printf("\n\tEnter Driver Details,");
	printf("\n\tName: ");
	getchar();
	scanf("%[^\n]s", newNode->name);
	printf("\n\tID: ");
	scanf("%d",&newNode->_id);

	printf("\n\tGender: ");
	getchar();
	scanf("%c",&newNode->gender);
	printf("\n\tPhone Number: ");
	scanf("%d",&newNode->phone);
	printf("\n\tCAB Details");
	printf("\n\tChoose Car Model: ");
	printf("\n\t1. Alto ");
	printf("\n\t2. Mahindra");
	printf("\n\t3. Honda");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			strcpy(newNode->CAR.carModel,"Alto");
			break;
		case 2:
			strcpy(newNode->CAR.carModel,"Mahindra");
			break;
		case 3:
			strcpy(newNode->CAR.carModel,"Honda");
			break;
		default:
			strcpy(newNode->CAR.carModel,"Alto");

	}
	
	printf("\n\tCar Reg No: ");
	getchar();
	scanf("%[^\n]s",newNode->CAR.carRegNo);
	printf("\n\tUser Name: ");
	scanf("%s", newNode->dName);
	printf("\n\tPassword: ");
	scanf("%s",newNode->dPasswd);

	if(head == NULL)
	{
		head = newNode;
		tmpNode = newNode;
	}
	else
	{
		while(tmpNode->next != NULL){
			tmpNode = tmpNode->next;
		}
		tmpNode->next = newNode;
		tmpNode = tmpNode->next;
	}

	return head;
}


int signInDriver(DRIVER *head)
{
	char lName[20], lPasswd[20];
	int ret = 0;
	printf("\n\t===============Driver Login=================\n");
	printf("\n\tEnter,");
	printf("\n\tUser Name: ");
	scanf("%s",lName);
	printf("\n\tPassword: ");
	scanf("%s",lPasswd);

	ret = findLRecDrv(head, lName, lPasswd);
	if(ret == 1)
		printf("\n\tLogged In");
	else
		printf("\n\tTry Again");

	return ret;
}

int findLRecDrv(DRIVER *head, char *lName, char *lPasswd)
{
	int flag = 0;
	while(head != NULL)
	{
		if((strcmp(head->dName, lName) == 0)&&(strcmp(head->dPasswd, lPasswd) == 0))
		{
			flag = 1;
			break;
		}
		head = head->next;
	}

	return flag;	
}


void dispDriver(DRIVER *head)
{
	while(head != NULL)
	{
		printf("\n\t%d",head->_id);
		head = head->next;
	}
}
