#include<stdio.h>
void lenWithPointer(char name[1000]);

int main()
{
	char name[1000];
	char *ptr;
	ptr=name;
	printf("\nEnter name here: ");
	scanf("%s",ptr);
	lenWithPointer(name);
	return 0;
}
void lenWithPointer(char name[1000])
{
	int i;
	char *ptr;
	ptr=name;
	for(i=0; ;i++)
	{
		if(*(ptr+i)=='\0')
		{
			break;
		}
	}
	printf("\n %d is the length of your name\n",i);
}

