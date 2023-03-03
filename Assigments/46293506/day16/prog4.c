#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Employee
{
	int age;
	int id;
	char name[20];
};
typedef struct Employee EMP;

void printDetails(EMP *);
void getDetails(EMP *);

int readFromFile(FILE *,EMP *);
int writeToFile(FILE *,EMP *);

int main()
{
	EMP emp;
	FILE *fptr;
	int ch=1;
	int reVal;

	fptr =fopen("file.txt","w+");
	if(fptr==NULL)
	{
		perror("File Open Error\n");
		return EXIT_FAILURE;
	}
	printf("File Opened\n");
	while(1)
	{
		printf("\n Enter \n 1.get details\n 2.printDetails \n3.clear screen \n 4. exit \n Enter yourchoice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: while(ch){
					getDetails(&emp);
					reVal = writeToFile(fptr,&emp);
					if(reVal== 0)
		             			{
						perror("WRITE ERROR\n");
						return EXIT_FAILURE;
					}
					printf("Do you want tp enter more Employe Details(1/0)\n");
					scanf("%d",&ch);
				}
				break;
	                case 2: while(readFromFile(fptr,&emp))
					printDetails(&emp);
				break;
			case 3: system("clear");
			        break;
			case 4: printf("thank you\n");
			        fclose(fptr);
			        exit(EXIT_SUCCESS);
			default:printf("worng choic\n");
                   
		}

	}
         
        fclose(fptr);
	return 0;
}

void getDetails(EMP *emp)
{
	printf("\nName:");
	scanf("%s",emp->name);
	printf("\nage:");
	scanf("%d",&emp->age);
	printf("\nid:");
	scanf("%d",&emp->id);

	printf("\n\n");
}

void printDetails(EMP *emp)
{
	printf("\nName :%s",emp->name);
	printf("\nage:%d",emp->age);
	printf("\nid:%d",emp->id);
        printf("\n");
}

int writeToFile(FILE *fptr,EMP *emp)
{
	fseek(fptr,0L,SEEK_END);
	return fwrite(emp,sizeof(EMP),1,fptr);
}

int readFromFile(FILE *fptr,EMP *emp)
{
	return fread(emp,sizeof(EMP),1,fptr);
}
