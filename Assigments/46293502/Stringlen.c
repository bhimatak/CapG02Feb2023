#include<stdio.h>

void lenPointer(char name[1024]);

int main()
{
	char name[1024];
	char *ptr;
	ptr=name;

	printf("\n\nEnter your name: ");
	//scanf("%[^\n]",ptr);
	scanf("%s",ptr);
	lenPointer(name);

	return 0;
}

void lenPointer(char name[1024])
{
	int i;
	char *ptr;
	ptr=name;
	for(i=0;;i++)
	{
		if(*(ptr+i)=='\0')
		{
			break;
		}
	}
	printf("\n %d is the length of your name\n\n",i);
}
