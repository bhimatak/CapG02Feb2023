#include<stdio.h>
#include<myHeader.h>


void inputCharArray(char *source,char *dest)
{
	printf("\n\nEnter the string 1:\n");
	fgets(source,size,stdin);

	printf("\n\nEnter the string 2:\n");
	fgets(dest,size,stdin);
}

void copystr(char *source,char *dest)
{
	int i=0;

	for(i=0;*(source+i)!='\0';i++)
	{
		strcpy((dest+i),(source+i));
	}
	*(dest+i)='\0';
}

void concatusinguf(int leng1,char *source, char *dest)
{
	int i=0,j=0;
	for(i=leng1-1;*(dest+j)!='\0';i++,j++)
	{
		strcpy((source+i),(dest+j));
	}
}

void displayArray(char *tt)
{
	printf("\n\n%s\n\n",tt);
}


