#include <stdio.h>
#include <stdlib.h>

struct Person
{
	int id;
	int phone;
	char Name[20];
};

typedef struct Person PERSON;

int main()
{
	PERSON a[3];

	PERSON *ptr, *temp;
	int n,i;
	
	scanf("%d",&n);

	ptr = (PERSON *)malloc(n*sizeof(PERSON));
	temp = ptr;
	for(i=0;i<n;i++, ptr++)
	{
		printf("\nName: ");
		scanf("%s",ptr->Name);
		printf("\nID: ");
		scanf("%d",&ptr->id);
		printf("\nPhone: ");
		scanf("%d",&ptr->phone);

	}
	ptr = temp;
	printf("\nList is\n");
	for(i=0;i<n;i++,ptr++)
	{
		printf("\nName: ");
		printf("%s",ptr->Name);
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