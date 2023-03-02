#include <stdio.h>
#include <stdlib.h>

struct Employee
{
	int id;
	int phone;
	char location[20]; 
	char Name[20];
};

typedef struct Employee EMP;

int main()
{
	EMP a[4];

 	EMP *ptr, *temp;
	int i;
	

	ptr = (EMP*)malloc(5*sizeof(EMP));
	temp = ptr;
	for(i=0;i<5;i++, ptr++)
	{
		printf("\nName: ");
		scanf("%s",ptr->Name);
		printf("\nLocation : ");
                scanf("%s",ptr->location);
		printf("\nID: ");
		scanf("%d",&ptr->id);
		printf("\nPhone: ");
		scanf("%d",&ptr->phone);

	}
	ptr = temp;
	printf("\nList is\n");
	for(i=0;i<5;i++,ptr++)
	{
		printf("\nName: ");
		printf("%s",ptr->Name);
		printf("\nLocation : ");
		printf("%s",ptr->location);
		printf("\nID: ");
		printf("%d",ptr->id);
		printf("\nPhone: ");
		printf("%d",ptr->phone);
		printf("\n==================\n");
	}
	ptr = temp;
	free(ptr);
	printf("\n\n");
	return 0;
}
