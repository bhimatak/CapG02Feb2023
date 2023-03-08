#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
		char s[]="This is a C class";
		char *token;
		token=strtok(s,",");
		printf("\nToken1: %s",token);
		printf("\n\n");
		return 0;
}
