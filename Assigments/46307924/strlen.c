#include<stdio.h>

int main()
{
	char str[100];
	int i,count=0;
	char *str;
	printf("Enter the string : ");
	ptr=str;
	gets(ptr);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}

	printf("The length of the string is : %d",count);
	return 0;
}
