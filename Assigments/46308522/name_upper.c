#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{	
	char name[10]="mahi";


	int i;
	
	for(i=0;name[i]!='\0';i++)
	{
		name[i] = toupper(name[i]);
	}
	puts(name);
	return 0;
}


