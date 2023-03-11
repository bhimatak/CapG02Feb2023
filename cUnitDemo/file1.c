#include "file1.h"


int add(int a, int b)
{
	return (a+b);
}

int mul(int a, int b)
{
	return (a*b);
}

float div1(int a, int b)
{
	if(b == 0)
		return 0.0;
	return ((float)a/(float)b);
}

int validName(char *name)
{
	int i;
	

	if(name==NULL)
		return 0;
	if(strcmp(name,"")==0)
		return 0;
	if(isdigit(name[0]) >0)
		return 0;

	for(i = 0;i<strlen(name);i++)
	{
		if(((name[i]>=97) && (name[i]<=122))||((name[i]>=65) && (name[i]<=90)))
		{
			continue;	
		}
		else
		{
			return 0;
		}
	}
	 
	return 1;
}

char *getName()
{
	/* read from the file the name */
	char *_name = "bhima";
	if(_name == NULL)
		return "";
	return (_name);
}