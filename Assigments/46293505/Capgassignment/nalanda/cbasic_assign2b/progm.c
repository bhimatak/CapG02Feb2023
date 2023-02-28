#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int getsentence(char []);
int printOneword(char[]);

int main()
{
	char str[1024];
	getsentence(str);
	printf("%s\n",str);
	return 0;
}
int getsentence(char str[])
{

	printf("enter the details");
	fgets(str,1024,stdin);
}

