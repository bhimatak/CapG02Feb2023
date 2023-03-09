#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct Employee
{
	int id;
	float sal;
	char name[20];
};

typedef struct Employee EMP;


void getDetails(EMP *);
int writeToFile(FILE *,EMP *);
int readFromFile(FILE *, EMP *);
void printDetails(EMP*);

int main()
{
	EMP e;
	FILE *fptr;
	int ch=1;
	int retVal=0;
	
	fptr = fopen("EMP.dat","r+");
	if(fptr == NULL)
	{
		perror("fopen ");
		exit(EXIT_FAILURE);
	}

	while(1)
	{
		//system("clear");
		printf("\nEnter your Choice");
		printf("\n1. Get Employee Details");
		printf("\n2. Print Employee Details");
		printf("\n3. Clear Screen");
		printf("\n4. Exit");
		printf("\nChoice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					while(ch)
					{
						getDetails(&e);
						retVal = writeToFile(fptr,&e);
						if(retVal == 0)
						{
							perror("write ");
							exit(EXIT_FAILURE);
						}
						printf("\nDo you want to add another employee(1/0): ");
						scanf("%d",&ch);
					}
					break;

			case 2:
					while(readFromFile(fptr,&e)){
						printDetails(&e);
						
					}
					//sleep(5);
					break;
			case 3:
					system("clear");
					break;
			case 4:
					printf("\nThank you\n");
					fclose(fptr);
					exit(EXIT_SUCCESS);
			default:
					printf("\nWrong Choice");

		}

	}

	
	printf("\n\n");

	fclose(fptr);
	return 0;

}

void getDetails(EMP *e)
{
	printf("\nEnter,");
	printf("\nName: ");
	scanf("%s",e->name);
	printf("\nSal: ");
	scanf("%f",&e->sal);
	printf("\nID: ");
	scanf("%d",&e->id);
}


void printDetails(EMP *e)
{
	printf("\n===Details of the Employee===");
	printf("\nName: ");
	printf("%s",e->name);
	printf("\nSal: ");
	printf("%f",e->sal);
	printf("\nID: ");
	printf("%d",e->id);
}


int writeToFile(FILE *fp, EMP *e1)
{
	fseek(fp,0L,SEEK_END);
	int ret = fwrite(e1, sizeof(EMP),1,fp);
	// printf("\nret = %d",ret);
	return ret;
}


int readFromFile(FILE *fp, EMP *e1)
{
	int ret = fread(e1, sizeof(EMP),1,fp);
	// printf("\nret = %d",ret);

	return ret;
}
