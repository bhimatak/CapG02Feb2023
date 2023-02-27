#include <stdio.h>
#include <string.h>
#include <persons.h>

int getPDetails(PERSON *p)
{
	int pid;

	printf("\nEnter,");
	printf("\nName: ");
	scanf("%s",p->name);
	printf("\nGender(M/F/O): ");
	scanf(" ");
	scanf("%c",&p->gender);
	printf("\nPhone: ");
	scanf("%d",&p->phno);
	printf("\nEMail ID: ");
	scanf("%s",p->emailid);
	printf("\nAge: ");
	scanf("%d",&p->age);
	printf("\nAddress: ");
	scanf("%s",p->address);

	printf("\nUID: ");
	scanf("%d",&p->uid);
	printf("\nPassword: ");
	scanf("%s", p->passwd);
	
	//logic to check no of recs present in db and get the count
	pid = 101;

	return pid;

}


void printPDetails(PERSON *p)
{
	printf("\n=====User Details are=======\n");
	printf("\nName: ");
	printf("%s",p->name);
	printf("\nGender(M/F/O): ");
	
	printf("%c",p->gender);
	printf("\nPhone: ");
	printf("%d",p->phno);
	printf("\nEMail ID: ");
	printf("%s",p->emailid);
	printf("\nAge: ");
	printf("%d", p->age);
	printf("\nAddress: ");
	printf("%s",p->address);

	printf("\nUID: ");
	printf("%d",p->uid);
	printf("\nPassword: ");
	printf("%s", p->passwd);
}